#include <iostream>
using namespace std;

//1.����ת��
void type_change()
{
	unsigned a = -1;
	int b=10;
	cout<<a<<endl;
	cout<<a+b<<endl;
}

//2.��������
void data_type()
{
	cout << "Size of char : " << sizeof(char) << endl;
	cout << "Size of int : " << sizeof(int) << endl;
	cout << "Size of short int : " << sizeof(short int) << endl;
	cout << "Size of long int : " << sizeof(long int) << endl;
	cout << "Size of float : " << sizeof(float) << endl;
	cout << "Size of double : " << sizeof(double) << endl;
	cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
	cout << "Size of unsigned : " << sizeof(unsigned) << endl;
}

//3.ö������
void enum_type()
{
	//typedef����
	typedef int feet;
	feet a = 10;
	cout << a << endl;

	//1.ö������
	enum color {red,green=6,blue} c; //Ĭ��red=0,blue=2
	c = green;
	cout << c << endl;
}

int main()
{
	type_change();
	data_type();
	return 0;
}


