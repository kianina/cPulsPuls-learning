#include <iostream>
using namespace std;


/*
1.ָ��
2.ָ������
3.����
4.const
5.��������ָ��
*/

void func()
{
    //1.ָ��
    int  var = 20;   // ʵ�ʱ���������
    int* ip;        // ָ�����������
    ip = &var;       // ��ָ������д洢 var �ĵ�ַ
    cout << "Value of var variable: ";
    cout << var << endl;
    // �����ָ������д洢�ĵ�ַ
    cout << "Address stored in ip variable: ";
    cout << ip << endl;
    // ����ָ���е�ַ��ֵ
    cout << "Value of *ip variable: ";
    cout << *ip << endl;

    //2.NULLָ��
    int* ptr1 = NULL; //��ַΪ�ڴ�ĳ���ַ000000
    // cout <<"ptr1��ֵ�ǣ�" << ptr1 << endl;
}

void func1()
{
     //3.ָ������
    int  var2[3] = { 10, 100, 200 };
    int* ptr2[3];
    for (int j = 0; j < 3; j++)
    {
        ptr2[j] = &var2[j]; // ��ֵΪ�����ĵ�ַ
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "Value of var2[" << i << "] = ";
        cout << *ptr2[i] << endl;
    }

    //4.ָ��ָ���ָ��
    int  var3;
    int* ptr3;
    int** pptr3;
    var3 = 3000;
    // ��ȡ var �ĵ�ַ
    ptr3 = &var3;
    // ʹ������� & ��ȡ ptr �ĵ�ַ
    pptr3 = &ptr3;
    // ʹ�� pptr ��ȡֵ
    cout << "Value of var3 :" << var3 << endl;
    cout << "Value available at *ptr3 :" << *ptr3 << endl;
    cout << "Value available at **pptr3 :" << **pptr3 << endl;
}

void func2()
{    
    //5.����
    //�����Ǳ�������һ����ǩ
     // �����򵥵ı���
    int    i;
    double d;
    // �������ñ���
    int& r = i;
    double& s = d;
    i = 5;
    cout << "Value of i : " << i << endl;
    cout << "Value of i reference : " << r << endl;
    d = 11.7;
    cout << "Value of d : " << d << endl;
    cout << "Value of d reference : " << s << endl;
}

void func3()
{
    //ָ��ָ�������
    int *p;
    int data=100;
    p=&data;
    cout<<*p<<endl;

    int &val = *p;
    cout<<val<<endl;

    val = 1000;
    cout<<*p<<endl;

}

void func4()
{
    //const�޶���
    const int val=100;
    cout<<val<<endl;
    //const������,���ñ���Ҳ��const����
    const int &val1=val;
    cout<<val1<<endl;

}

void func5()
{
    //��ʼ����const����
    int i=100;
    int &r1 = i;
    const int &r2 = i;
    cout<<r1<<" "<<r2<<endl;
    r1 = 10;
    //�޷��޸�r2��ֵ��r2�Ǳ�������һ����ʱ������ֵ
}


//5.��������ָ��
// ��������ָ��
// ���������鰴λ�����
/*ע�⺯����ִ�к����еı����ᱻɾ�����������������ȫ�ֱ������߾�̬��������Ϊ����ֵ
������ĵ�һ��ֵ�ĵ�ַ������Ļ�ȫ����ɾ��*/

// int (*array_point(int val1[10],int val2[10]))[10]
// {

// 	static int val3[10];
// 	for(int i=0;i<10;i++)
// 	{
// 		val3[i]=val2[i]+val1[i];
// 	}
// 	return &val3;
// }
// void array_func()
// {
//     int val1[10];
//     int val2[10];
// 	for(int i=0;i<10;i++)
// 	{
// 		val1[i]=(i+1)*2;
// 		val2[i]=(i+2)*3;
// 	} 
// 	int (*plt)[10]=array_point();
// 	for(int i=0;i<10;i++)
// 	{
// 		cout<<(**plt)++<<endl;
// 	}
// }

static int arry[10] = {1,2,3,4,5,6,7,8,9,10};
int (*fun())[10]
{       
    cout<<&arry<<endl;
    for(int i=0;i<10;i++)
    {
        arry[i]=arry[i]*3;
    }
    cout<<&arry<<endl;
	return &arry;
}
void func49()
{
    int (*p)[10] = fun();
	for(int i=0;i<10;i++)
	{
		cout<<*(*p++)<<" ";
	}
	    cout<<endl;
}


int main()
{
    func49();
    return 0;
}