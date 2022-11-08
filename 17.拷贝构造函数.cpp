#include <iostream>

using namespace std;

//1.�������캯��
class Line
{
public:
    int getLength(void);
    Line(int len);             // �򵥵Ĺ��캯��
    Line(const Line& obj);  // �������캯��
    ~Line();                     // ��������

private:
    int* ptr;
};

// ��Ա�������壬�������캯��
Line::Line(int len)
{
    cout << "Normal constructor allocating ptr" << endl;
    // Ϊָ������ڴ�
    ptr = new int;
    *ptr = len;
}

Line::Line(const Line& obj)
{
    cout << "Copy constructor allocating ptr." << endl;
    ptr = new int;
    *ptr = *obj.ptr; // copy the value
}

Line::~Line(void)
{
    cout << "Freeing memory!" << endl;
    delete ptr;
}
int Line::getLength(void)
{
    return *ptr;
}
void display(Line obj)
{
    cout << "Length of line : " << obj.getLength() << endl;
}


//2.��Ԫ����
#include <iostream>

using namespace std;

class Box
{
    double width;
public:
    friend void printWidth(Box box); //��Ԫ����������������ĺ���
    void setWidth(double wid);
};

// ��Ա��������
void Box::setWidth(double wid)
{
    width = wid;
}

// ��ע�⣺printWidth() �����κ���ĳ�Ա����
void printWidth(Box box)
{
    /* ��Ϊ printWidth() �� Box ����Ԫ��������ֱ�ӷ��ʸ�����κγ�Ա */
    cout << "Width of box : " << box.width << endl;
}


//3.��������
//���������Կռ任ʱ��
//���һ�������������ģ���ô�ڱ���ʱ����������Ѹú����Ĵ��븱��������ÿ�����øú����ĵط���
inline int Max(int x, int y)
{
    return (x > y) ? x : y;
}
// �����������
int main()
{
    //1.
    Line line(10);
    display(line);


    //2.
    Box box;
    // ʹ�ó�Ա�������ÿ��
    box.setWidth(10.0);
    // ʹ����Ԫ����������
    printWidth(box);

    //3.
    cout << "Max (20,10): " << Max(20, 10) << endl;
    cout << "Max (0,200): " << Max(0, 200) << endl;
    cout << "Max (100,1010): " << Max(100, 1010) << endl;
    return 0;
}