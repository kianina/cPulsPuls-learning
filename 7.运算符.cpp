#include<iostream>
using namespace std;
int main()
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
	system("pause");
	return 0;
}