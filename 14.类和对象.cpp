#include <iostream>

using namespace std;
//1.���岢������ĳ�Ա
class Box
{
public:
    double length;   // ����
    double breadth;  // ���
    double height;   // �߶�
    //2.��ĳ�Ա����
    // ��Ա��������
    double getVolume(void);
    void setLength(double len);
    void setBreadth(double bre);
    void setHeight(double hei);
};

//��Ա��������
double Box::getVolume(void)
{
    return length * breadth * height;
}

void Box::setLength(double len)
{
    length = len;
}

void Box::setBreadth(double bre)
{
    breadth = bre;
}

void Box::setHeight(double hei)
{
    height = hei;
}

int main()
{
    ////1.
    //Box Box1;        // ���� Box1������Ϊ Box
    //Box Box2;        // ���� Box2������Ϊ Box
    //double volume = 0.0;     // ���ڴ洢���
    //// box 1 ����
    //Box1.height = 5.0;
    //Box1.length = 6.0;
    //Box1.breadth = 7.0;
    //// box 2 ����
    //Box2.height = 10.0;
    //Box2.length = 12.0;
    //Box2.breadth = 13.0;
    //// box 1 �����
    //volume = Box1.height * Box1.length * Box1.breadth;
    //cout << "Box1 �������" << volume << endl;
    //// box 2 �����
    //volume = Box2.height * Box2.length * Box2.breadth;
    //cout << "Box2 �������" << volume << endl;

    //2.��ĳ�Ա����
    Box Box1;                // ���� Box1������Ϊ Box
    Box Box2;                // ���� Box2������Ϊ Box
    double volume = 0.0;     // ���ڴ洢���
    // box 1 ����
    Box1.setLength(6.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(5.0);
    // box 2 ����
    Box2.setLength(12.0);
    Box2.setBreadth(13.0);
    Box2.setHeight(10.0);
    // box 1 �����
    volume = Box1.getVolume();
    cout << "Box1 �������" << volume << endl;
    // box 2 �����
    volume = Box2.getVolume();
    cout << "Box2 �������" << volume << endl;
    return 0;
}