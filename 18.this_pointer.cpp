#include <iostream>

using namespace std;
//1.thisָ��
//��ÿһ��������ͨ�� this ָ���������Լ��ĵ�ַ��this ָ�������г�Ա����������������
//,��ˣ��ڳ�Ա�����ڲ�������������ָ����ö���,��Ԫ����û��thisָ��
class Box
{
public:
    // ���캯������
    Box(double l = 2.0, double b = 2.0, double h = 2.0)
    {
        cout << "Constructor called." << endl;
        length = l;
        breadth = b;
        height = h;
    }
    double Volume()
    {
        return length * breadth * height;
    }
    int compare(Box box)
    {
        return this->Volume() > box.Volume();
    }
private:
    double length;     // Length of a box
    double breadth;    // Breadth of a box
    double height;     // Height of a box
};


//2.��̬��Ա
//������������ĳ�ԱΪ��̬ʱ��
//����ζ�����۴������ٸ���Ķ��󣬾�̬��Ա��ֻ��һ������
/*
���ܰѾ�̬��Ա��������Ķ����У�
���ǿ���������ⲿͨ��ʹ�÷�Χ��������� :: 
������������̬�����Ӷ��������г�ʼ��
*/
class Boxu
{
public:
    static int objectCount;
    // ���캯������
    Boxu(double l = 2.0, double b = 2.0, double h = 2.0)
    {
        cout << "Constructor called." << endl;
        length = l;
        breadth = b;
        height = h;
        // ÿ�δ�������ʱ���� 1
        objectCount++;
    }
    double Volume()
    {
        return length * breadth * height;
    }
private:
    double length;     // ����
    double breadth;    // ���
    double height;     // �߶�
};
// ��ʼ���� Box �ľ�̬��Ա
int Boxu::objectCount = 0;


//4.��̬��Ա����
class Boxx
{
public:
    static int objectCount;
    // ���캯������
    Boxx(double l = 2.0, double b = 2.0, double h = 2.0)
    {
        cout << "Constructor called." << endl;
        length = l;
        breadth = b;
        height = h;
        // ÿ�δ�������ʱ���� 1
        objectCount++;
    }
    double Volume()
    {
        return length * breadth * height;
    }
    static int getCount()
    {
        return objectCount;
    }
private:
    double length;     // ����
    double breadth;    // ���
    double height;     // �߶�
};
// ��ʼ���� Box �ľ�̬��Ա
int Boxx::objectCount = 0;

int main(void)
{
    //1.
    Box Box1(3.3, 1.2, 1.5);    // Declare box1
    Box Box2(8.5, 6.0, 2.0);    // Declare box2

    if (Box1.compare(Box2))
    {
        cout << "Box2 is smaller than Box1" << endl;
    }
    else
    {
        cout << "Box2 is equal to or larger than Box1" << endl;
    }

    //2.ָ�����ָ��
    Box* ptrBox;                // Declare pointer to a class.
    // �����һ������ĵ�ַ
    ptrBox = &Box1;
    // ���ڳ���ʹ�ó�Ա��������������ʳ�Ա
    cout << "Volume of Box1: " << ptrBox->Volume() << endl;
    // ����ڶ�������ĵ�ַ
    ptrBox = &Box2;
    // ���ڳ���ʹ�ó�Ա��������������ʳ�Ա
    cout << "Volume of Box2: " << ptrBox->Volume() << endl;

    //3.��̬��Ա
    Boxu Box11(3.3, 1.2, 1.5);   // ���� box1
    Boxu Box21(8.5, 6.0, 2.0);    // ���� box2
    // ������������
    cout << "Total objects: " << Boxu::objectCount << endl;


    //4.��̬��Ա����
    // �ڴ�������֮ǰ������������
    cout << "Inital Stage Count: " << Boxx::getCount() << endl;
    Boxx Box12(3.3, 1.2, 1.5);    // ���� box1
    Boxx Box22(8.5, 6.0, 2.0);    // ���� box2
    // �ڴ�������֮��������������
    cout << "Final Stage Count: " << Boxx::getCount() << endl;
    return 0;
}