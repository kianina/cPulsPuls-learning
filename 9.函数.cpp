#include<iostream>
using namespace std;
//��������
int max(int num1, int num2);
//int sum(int a, int e = 100);
void swap(int x, int y);
void swap_index(int* x, int* y);
void swap_ying(int& x, int& y);
int main()
{
	//1.��������
	int c;
	c = max(3, 6);
	cout << c << endl;

	//2.����Ĭ�ϲ���
	//int number = 100;
	//int d = sum(number);
	//cout << d << endl;

	//3.��ֵ����
	// �ֲ���������
	int a = 100;
	int b = 200;
	cout << "����ǰ��a ��ֵ��" << a << endl;
	cout << "����ǰ��b ��ֵ��" << b << endl;
	// ���ú���������ֵ
	swap(a, b);
	cout << "������a ��ֵ��" << a << endl;
	cout << "������b ��ֵ��" << b << endl;

	//4.ָ�봫����
	cout << "����ǰ��a ��ֵ��" << a << endl;
	cout << "����ǰ��b ��ֵ��" << b << endl;
	/* ���ú���������ֵ
	 * &a ��ʾָ�� a ��ָ�룬������ a �ĵ�ַ
	 * &b ��ʾָ�� b ��ָ�룬������ b �ĵ�ַ
	 */
	swap_index(&a, &b);
	cout << "������a ��ֵ��" << a << endl;
	cout << "������b ��ֵ��" << b << endl;

	//5.���ô���
	cout << "����ǰ��a ��ֵ��" << a << endl;
	cout << "����ǰ��b ��ֵ��" << b << endl;
	/* ���ú���������ֵ */
	swap_ying(a, b);
	cout << "������a ��ֵ��" << a << endl;
	cout << "������b ��ֵ��" << b << endl;
	return 0;
}

//1.��������
int max(int num1, int num2)
{
	int result;
	if (num1 > num2)
		result = num1;
	else
		result = num2;
	return result;
}
////2.Ĭ�ϲ���
//int sum(int a, int e = 100)
//{
//	int result;
//	result = a + e;
//	return (result);
//}
//3.��ֵ����
void swap(int x, int y)
{
	int temp;
	temp = x; /* ���� x ��ֵ */
	x = y;    /* �� y ��ֵ�� x */
	y = temp; /* �� x ��ֵ�� y */
	return;
}

//4.ָ�����
void swap_index(int* x, int* y)
{
	int temp;
	temp = *x;	/* �����ַ x ��ֵ */
	*x = *y;		/* �� y ��ֵ�� x */
	*y = temp;	/* �� x ��ֵ�� y */

	return;
}

//5.���õ���
/*
�������ݲ��������õ��÷������Ѳ����ĵ�ַ���Ƹ���ʽ������
�ں����ڣ����������ڷ��ʵ�����Ҫ�õ���ʵ�ʲ���������ζ�ţ���
����ʽ������Ӱ��ʵ�ʲ�����
*/
void swap_ying(int& x, int& y)
{
	int temp;
	temp = x; /* �����ַ x ��ֵ */
	x = y;    /* �� y ��ֵ�� x */
	y = temp; /* �� x ��ֵ�� y  */

	return;
}