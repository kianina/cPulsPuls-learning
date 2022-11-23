#include <iostream> 
using namespace std;
/*
C++ ��̬��ζ�ŵ��ó�Ա����ʱ������ݵ��ú����Ķ����������ִ�в�ͬ�ĺ���
*/
class Shape {
protected:
    int width, height;
public:
    Shape(int a = 0, int b = 0)
    {
        width = a;
        height = b;
    }
    //�麯�������߱�������Ҫ���ӵ��ú���
    virtual int area() //û��virtualʱ�����������ڳ���ִ��ǰ��׼�����ˡ���ʱ����Ҳ����Ϊ���
    {
        cout << "Parent class area :" << endl;
        return 0;
    }
};
class Rectangle : public Shape {
public:
    Rectangle(int a = 0, int b = 0) :Shape(a, b) { }
    int area()
    {
        cout << "Rectangle class area :" << endl;
        return (width * height);
    }
};
class Triangle : public Shape {
public:
    Triangle(int a = 0, int b = 0) :Shape(a, b) { }
    int area()
    {
        cout << "Triangle class area :" << endl;
        return (width * height / 2);
    }
};

void test()
{
    Shape* shape;
    Rectangle rec(10, 7);
    Triangle  tri(10, 5);
    // �洢���εĵ�ַ
    shape = &rec;
    // ���þ��ε���������� area
    shape->area();
    // �洢�����εĵ�ַ
    shape = &tri;
    // ���������ε���������� area
    shape->area();
}

// �����������
int main()
{
    test();
    return 0;
}