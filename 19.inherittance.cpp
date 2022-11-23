#include <iostream>
using namespace std;


/*
1.���̳�
2.��̳�
*/


//1.���̳�
// ����
class Shape
{
public:
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
protected:
    int width;
    int height;
};
// ������
class Rectangle : public Shape
{
public:
    int getArea()
    {
        return (width * height);
    }
};

//2.��̳�
// ���� PaintCost
class PaintCost
{
public:
    int getCost(int area)
    {
        return area * 70;
    }
};
// ������
class Rectangle1 : public Shape, public PaintCost
{
public:
    int getArea()
    {
        return (width * height);
    }
};

void test()
{
    //1.
    Rectangle Rect;
    Rect.setWidth(5);
    Rect.setHeight(7);
    // �����������
    cout << "Total area: " << Rect.getArea() << endl;
}

void test1()
{
    //2.
    Rectangle1 Rect1;
    int area;
    area = Rect1.getArea();
    // �����������
    cout << "Total area: " << Rect1.getArea() << endl;
    // ����ܻ���
    cout << "Total paint cost: $" << Rect1.getCost(area) << endl;
}


int main(void)
{
    return 0;
}