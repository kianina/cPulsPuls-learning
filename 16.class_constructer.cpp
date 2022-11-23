#include <iostream>
using namespace std;

/*
1.��
*/


//1.��Ĺ��캯��
//��Ĺ��캯����ΪĳЩ�������ó�ʼֵ
class Line
{
public:
    void setLength(double len);
    double getLength(void);
    Line();  // ���ǹ��캯��

private:
    double length;
};
// ��Ա�������壬�������캯��
Line::Line(void)
{
    cout << "Object is being created" << endl;
}
void Line::setLength(double len)
{
    length = len;
}
double Line::getLength(void)
{
    return length;
}

//2.�������Ĺ��캯��
class Line1
{
public:
    void setLength(double len);
    double getLength(void);
    Line1(double len);  // ���ǹ��캯��

private:
    double length;
};
// ��Ա�������壬�������캯��
Line1::Line1(double len)
{
    cout << "Object is being created, length = " << len << endl;
    length = len;
}
void Line1::setLength(double len)
{
    length = len;
}
double Line1::getLength(void)
{
    return length;
}


//3.�����������
//���ã����������ͷ���Դ
class Line2
{
public:
    void setLength(double len);
    double getLength(void);
    Line2();   // ���ǹ��캯������
    ~Line2();  // ����������������

private:
    double length;
};

// ��Ա�������壬�������캯��
Line2::Line2(void)
{
    cout << "Object is being created" << endl;
}
Line2::~Line2(void)
{
    cout << "Object is being deleted" << endl;
}
void Line2::setLength(double len)
{
    length = len;
}
double Line2::getLength(void)
{
    return length;
}



// �����������
int main()
{
    //1.��Ĺ��캯��
    Line line;
    // ���ó���
    line.setLength(6.0);
    cout << "Length of line : " << line.getLength() << endl;


    //2.�������Ĺ��캯��
    Line1 line1(10.0);
    // ��ȡĬ�����õĳ���
    cout << "Length of line1 : " << line1.getLength() << endl;
    // �ٴ����ó���
    line1.setLength(6.0);
    cout << "Length of line1 : " << line1.getLength() << endl;

    //3.��������
    Line2 line2;
    // ���ó���
    line2.setLength(6.0);
    cout << "Length of line : " << line2.getLength() << endl;
    return 0;
}