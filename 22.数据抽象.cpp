#include <iostream>
using namespace std;

//1.���ݳ���
/*
���ݷ�װ��һ�ְ����ݺͲ������ݵĺ���������һ��Ļ��ƣ�
���ݳ�����һ�ֽ����û���¶�ӿڶ��Ѿ����ʵ��ϸ�����������Ļ��ơ�
*/
class Adder {
public:
    // ���캯��
    Adder(int i = 0)
    {
        total = i;
    }
    // ����Ľӿ�
    void addNum(int number)
    {
        total += number;
    }
    // ����Ľӿ�
    int getTotal()
    {
        return total;
    };
private:
    // �������ص�����
    int total;
};

//2.�ӿ�
//C++ �ӿ���ʹ�ó�������ʵ�ֵģ������������ݳ��󻥲����������ݳ�����һ����ʵ��ϸ������ص����ݷ��뿪�ĸ���
//�������������һ������������Ϊ���麯�������������ǳ����ࡣ���麯����ͨ����������ʹ�� "= 0" ��ָ����
//��Ƴ����ࣨͨ����Ϊ ABC����Ŀ�ģ���Ϊ�˸��������ṩһ�����Լ̳е��ʵ��Ļ��ࡣ�����಻�ܱ�����ʵ����������ֻ����Ϊ�ӿ�ʹ�á������ͼʵ����һ��������Ķ��󣬻ᵼ�±������
// ����
class Shape
{
public:
    // �ṩ�ӿڿ�ܵĴ��麯��
    virtual int getArea() = 0;
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
class Triangle : public Shape
{
public:
    int getArea()
    {
        return (width * height) / 2;
    }
};
int main()
{
    //1.
    Adder a;
    a.addNum(10);
    a.addNum(20);
    a.addNum(30);
    cout << "Total " << a.getTotal() << endl;

    //2.
    Rectangle Rect;
    Triangle  Tri;
    Rect.setWidth(5);
    Rect.setHeight(7);
    // �����������
    cout << "Total Rectangle area: " << Rect.getArea() << endl;
    Tri.setWidth(5);
    Tri.setHeight(7);
    // �����������
    cout << "Total Triangle area: " << Tri.getArea() << endl;
    return 0;
}