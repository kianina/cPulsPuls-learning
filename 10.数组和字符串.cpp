#include<iostream>
using namespace std;
#include<cmath>
#define _CRT_SECURE_NO_WARNINGS
#include<ctime>
#include<cstdlib>
#include<cstring>
#include<string>
#include<iomanip>
using std::setw;

////��Ĭ�ϲ����ĺ���
//void func(int n, float b = 1.2, char c = '@') {
//    cout << n + b << endl;
//    cout << c << endl;
//}
//int main() {
//    ////Ϊ���в�����ֵ
//    //func(10, 3.5, '#');
//    ////Ϊn��b��ֵ���൱�ڵ���func(20, 9.8, '@')
//    //func(20, 9.8);
//    ////ֻΪn��ֵ���൱�ڵ���func(30, 1.2, '@')
//    //func(30);
//    //return 0;
//}
double getAverage(int arr[], int size);
int* getRandom();
int main()
{
	//1.��ѧ����
	// ���ֶ���
	short  s = 10;
	int    i = -1000;
	long   l = 100000;
	float  f = 230.47;
	double d = 200.374;
	// ��ѧ����
	cout << "sin(d) :" << sin(d) << endl;
	cout << "abs(i)  :" << abs(i) << endl;
	cout << "floor(d) :" << floor(d) << endl;
	cout << "sqrt(f) :" << sqrt(f) << endl;
	cout << "pow( d, 2) :" << pow(d, 2) << endl;

	//2.�����
	int i1, j1;
	//��������
	srand((unsigned)time(NULL));
	//����10�������
	for (i = 0; i < 10; i++) {
		j1 = rand();
		cout << "�������" << j1 << endl;
	}


	//3.����
	int n[10]; // n ��һ������ 10 ������������
    // ��ʼ������Ԫ��          
	for (int i = 0; i < 10; i++) {
		n[i] = i + 100; // ����Ԫ�� i Ϊ i + 100
	}
	cout << "Element" << setw(13) << "Value" << endl;
	// ���������ÿ��Ԫ�ص�ֵ                     
	for (int j = 0; j < 10; j++) {
		cout << setw(7) << j << setw(13) << n[j] << endl;
	}

	//4.��ά����
	// һ������ 5 �� 2 �е�����
	int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8} };
	// ���������ÿ��Ԫ�ص�ֵ                      
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 2; j++)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cout << a[i][j] << endl;
		}

	//5.ָ�������ָ��
	// ���� 5 ��Ԫ�ص���������
	double balance[5] = { 1000.0, 2.0, 3.4, 17.0, 50.0 };
	double* p;
	p = balance;
	// ���������ÿ��Ԫ�ص�ֵ
	//���banlance[0]�ĵ�ַ
	cout << &p << endl;
	cout << "ʹ��ָ�������ֵ " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "*(p + " << i << ") : ";
		cout << *(p + i) << endl;
	}
	cout << "ʹ�� balance ��Ϊ��ַ������ֵ " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "*(balance + " << i << ") : ";
		cout << *(balance + i) << endl;
	}

	//6.�������������
	int bal[5] = { 1000, 2, 3, 17, 50 };
	double avg;
	// ����һ��ָ�������ָ����Ϊ����
	avg = getAverage(bal, 5);
	// �������ֵ
	cout << "ƽ��ֵ�ǣ�" << avg << endl;

	//7.�Ӻ�����������
	// һ��ָ��������ָ��
	int* plt;
	plt = getRandom();
	for (int i = 0; i < 10; i++)
	{
		cout << "*(plt + " << i << ") : ";
		cout << *(plt + i) << endl;
	}

	//8.��ʼ���ַ���
	char greeting[] = "hello";
	char greeting1[6]= { 'H', 'e', 'l', 'l', 'o', '\0' };
	cout << "Greeting message: ";
	cout << greeting << endl;
	cout << greeting1 << endl;

	//9.�����ַ�������
	char str1[11] = "Hello";
	char str2[11] = "World";
	char str3[11];
	int  len;
	// ���� str1 �� str3
	strcpy_s(str3, str1);
	cout << "strcpy_s( str3, str1) : " << str3 << endl;
	// ���� str1 �� str2
	strcat_s(str1, str2);
	cout << "strcat_s( str1, str2): " << str1 << endl;
	// ���Ӻ�str1 ���ܳ���
	len = strlen(str1);
	cout << "strlen(str1) : " << len << endl;

	//10.c++�е�string��
	string str11 = "Hello";
	string str21 = "World";
	string str31;
	int  len1;
	// ���� str1 �� str3
	str31 = str11;
	cout << "str3 : " << str31 << endl;
	// ���� str11 �� str21
	str31 = str11 + str2;
	cout << "str11 + str21 : " << str31 << endl;
	// ���Ӻ�str31 ���ܳ���
	len1 = str31.size();
	cout << "str31.size() :  " << len1 << endl;
	return 0;
}

double getAverage(int arr[], int size)
{
	int    i, sum = 0;
	double avg;
	for (i = 0; i < size; ++i)
	{
		sum += arr[i];
	}
	avg = double(sum) / size;
	return avg;
}

// Ҫ���ɺͷ���������ĺ���
int* getRandom( )
{
	static int  r[10];

	// ��������
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; ++i)
	{
		r[i] = rand();
		cout << r[i] << endl;
	}

	return r;
}