#include<iostream>
#include<time.h>
using namespace std;
/*
1.����
2.��ά����
*/

//���������
void func()
{
//1.sizeof ;���ر����Ĵ�С
	int a = 10;
	int X = 1;
	int Y = 2;
	cout << sizeof(a) << endl;
	
	//2.Condition ? X:Y ���������
	cout << (a > 5) ? X : Y;
	cout << "\n" << endl;

	//3.���������
	int b = (a++, a + 100, a + 99);
	cout << b << endl;

	//4.Cast ǿ��ת�������
	double c = 20.144;
	cout << int(c) << endl;

	//5.ָ�������
	// & ���������"ȡ��ַ�����"
	cout << &c << endl;
	//* ��һԪ����������ز�������ָ����ַ�ı�����ֵ��
	int* p;
	int data = 100;
	p = &data;
	cout << *p << endl;
	cout << p << endl;
}

//1.����
//1.1�������������
void func1()
{
	int arr[5]={1,2,3,5,6};
	int *plt[5];
	int (*plt1)[5]=&arr; //ָ��һ������5��Ԫ�ص�����
	int (&arrRef)[5]=arr; //Ϊÿ��Ԫ�ؽ�������
	for(int i=0;i<5;i++)
	{
		// cout<<plt[i]<<endl;
		cout<<(*plt1)[i]<<endl;
		// cout<<arrRef[i]<<endl;
	}
	cout<<*plt1<<endl; //���ָ��ĵ�ַ
}
//practice3.5.3
//practice3.35
void practice3_35()
{
	int num=10;
	int arr[num];
	int (&arrRe)[num]=arr;
	for(int i=0;i<num;i++)
	{
		arrRe[i]=i*3;
	}
	cout<<arrRe[3]<<endl;
	int (*plt)[num] = &arrRe;
	for(int i=0;i<num;i++)
	{
		(*plt)[i] = 0;
	}
	cout<<arrRe[3]<<endl;
	int *plt1=&arrRe[0];
	for(;plt1!=&arrRe[num];plt1++)
	{
		(*plt1)=1;
	}
	cout<<arrRe[3]<<endl;
}

//1.2��ά�����ָ��
void func2()
{
	unsigned seed;
	seed=time(0);
	srand(seed);
	int num1=4,num2=5;
	int arr[num1][num2];
	for(int i=0;i<num1;i++)
	{
		for(int j=0;j<num2;j++)
		{
			arr[i][j]=(i+1)*(j+1);
		}
	}

	int (*plt)[num2]=arr; //ָ��������num1�ĵ�һ��Ԫ�أ���Ԫ����һ��������num2������
	cout<<(*plt)[1]<<endl; //���num1�ĵڶ���Ԫ��
	cout<<(*(plt+1))[1]<<endl; //���num2�ĵڶ���Ԫ��
}
int main()
{
	func2();
	return 0;
}