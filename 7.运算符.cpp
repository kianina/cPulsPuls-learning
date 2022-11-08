#include<iostream>
using namespace std;
int main()
{
	//1.sizeof ;返回变量的大小
	int a = 10;
	int X = 1;
	int Y = 2;
	cout << sizeof(a) << endl;
	
	//2.Condition ? X:Y 条件运算符
	cout << (a > 5) ? X : Y;
	cout << "\n" << endl;

	//3.逗号运算符
	int b = (a++, a + 100, a + 99);
	cout << b << endl;

	//4.Cast 强制转换运算符
	double c = 20.144;
	cout << int(c) << endl;

	//5.指针运算符
	// & 运算符读作"取地址运算符"
	cout << &c << endl;
	//* 是一元运算符，返回操作数所指定地址的变量的值。
	int* p;
	int data = 100;
	p = &data;
	cout << *p << endl;
	cout << p << endl;
	system("pause");
	return 0;
}