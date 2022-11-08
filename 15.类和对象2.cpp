#include <iostream>

using namespace std;

//1.���г�Ա
class Line
{
public: 
    double length;
    void setLength(double len);
    double getLength(void);
};
// ��Ա��������
double Line::getLength(void)
{
    return length;
}

void Line::setLength(double len)
{
    length = len;
}


//2.˽�г�Ա
class Box
{
public:
    double length;
    void setWidth(double wid);
    double getWidth(void);

private:
    double width;
};

// ��Ա��������
double Box::getWidth(void)
{
    return width;
}

void Box::setWidth(double wid)
{
    width = wid;
}



//3.������Ա
class Box1
{
protected:
    double width;
};

class SmallBox1 :Box1 // SmallBox ��������
{
public:
    void setSmallWidth(double wid);
    double getSmallWidth(void);
};

// ����ĳ�Ա����
double SmallBox1::getSmallWidth(void)
{
    return width;
}

void SmallBox1::setSmallWidth(double wid)
{
    width = wid;
}



// �����������
int main()
{
    //1.���г�Ա
    Line line;
    // ���ó���
    line.setLength(6.0);
    cout << "Length of line : " << line.getLength() << endl;
    // ��ʹ�ó�Ա�������ó���
    line.length = 10.0; // OK: ��Ϊ length �ǹ��е�
    cout << "Length of line : " << line.length << endl;


    //2.˽�г�Ա
    Box box;
    // ��ʹ�ó�Ա�������ó���
    box.length = 10.0; // OK: ��Ϊ length �ǹ��е�
    cout << "Length of box : " << box.length << endl;
    // ��ʹ�ó�Ա�������ÿ��
    // box.width = 10.0; // Error: ��Ϊ width ��˽�е�
    box.setWidth(10.0);  // ʹ�ó�Ա�������ÿ��
    cout << "Width of box : " << box.getWidth() << endl;

    //3.������Ա
    SmallBox1 box1;
    // ʹ�ó�Ա�������ÿ��
    box1.setSmallWidth(5.0);
    cout << "Width of box1 : " << box1.getSmallWidth() << endl;
    return 0;
}