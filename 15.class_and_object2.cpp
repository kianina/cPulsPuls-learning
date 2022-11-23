#include <iostream>

using namespace std;


/*
1.��ķ���Ȩ��
2.��Ԫ
*/


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
//���Ժ���
void func()
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

}

//2.��Ԫ
class number
{
friend void func1(); //1.ȫ�ֺ�����Ϊ��Ԫ
friend class number1;
public:
    int sum(int a,int b)
    {
        return a+b;
    }
    int sub(int a,int b)
    {
        return a-b;
    }
    int toub(int a,int b)
    {
        int c=this->multi(a,b);
        return c+b;
    }
private:
    int a;
    int b;
    int multi(int a,int b)
    {
        return a*b;
    }
};
//����1��ȫ�ֺ�����Ϊ��Ԫ
void func1()
{
    number num;
    int a=10,b=100,data,data1;
    data=num.sum(a,b);
    cout<<data<<endl;
    data1=num.multi(a,b);  //ʹ����Ԫ�������˽�г�Ա����
    cout<<data1<<endl;
}
//����2������Ϊ��Ԫ
class number1
{
public:
    int a=10,b=100;
    void func_numx()
    {
    number num;
    a=num.sub(a,b);
    cout<<a<<endl;
    b=num.multi(a,b);
    cout<<b<<endl;
    }
};
void func2()
{
    number1 num;
    num.func_numx();
}

//����3����Ա������Ϊ��Ԫ
void func3()
{
    number num;
    int a=100,b=15;
    int c=num.toub(a,b);
    cout<<c<<endl;
}


// �����������
int main()
{
    func3();
    return 0;
}