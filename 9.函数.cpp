#include<iostream>
using namespace std;
//函数声明
int max(int num1, int num2);
//int sum(int a, int e = 100);
void swap(int x, int y);
void swap_index(int* x, int* y);
void swap_ying(int& x, int& y);
int main()
{
	//1.函数定义
	int c;
	c = max(3, 6);
	cout << c << endl;

	//2.函数默认参数
	//int number = 100;
	//int d = sum(number);
	//cout << d << endl;

	//3.传值参数
	// 局部变量声明
	int a = 100;
	int b = 200;
	cout << "交换前，a 的值：" << a << endl;
	cout << "交换前，b 的值：" << b << endl;
	// 调用函数来交换值
	swap(a, b);
	cout << "交换后，a 的值：" << a << endl;
	cout << "交换后，b 的值：" << b << endl;

	//4.指针传参数
	cout << "交换前，a 的值：" << a << endl;
	cout << "交换前，b 的值：" << b << endl;
	/* 调用函数来交换值
	 * &a 表示指向 a 的指针，即变量 a 的地址
	 * &b 表示指向 b 的指针，即变量 b 的地址
	 */
	swap_index(&a, &b);
	cout << "交换后，a 的值：" << a << endl;
	cout << "交换后，b 的值：" << b << endl;

	//5.引用传参
	cout << "交换前，a 的值：" << a << endl;
	cout << "交换前，b 的值：" << b << endl;
	/* 调用函数来交换值 */
	swap_ying(a, b);
	cout << "交换后，a 的值：" << a << endl;
	cout << "交换后，b 的值：" << b << endl;
	return 0;
}

//1.函数定义
int max(int num1, int num2)
{
	int result;
	if (num1 > num2)
		result = num1;
	else
		result = num2;
	return result;
}
////2.默认参数
//int sum(int a, int e = 100)
//{
//	int result;
//	result = a + e;
//	return (result);
//}
//3.传值参数
void swap(int x, int y)
{
	int temp;
	temp = x; /* 保存 x 的值 */
	x = y;    /* 把 y 赋值给 x */
	y = temp; /* 把 x 赋值给 y */
	return;
}

//4.指针调用
void swap_index(int* x, int* y)
{
	int temp;
	temp = *x;	/* 保存地址 x 的值 */
	*x = *y;		/* 把 y 赋值给 x */
	*y = temp;	/* 把 x 赋值给 y */

	return;
}

//5.引用调用
/*
向函数传递参数的引用调用方法，把参数的地址复制给形式参数。
在函数内，该引用用于访问调用中要用到的实际参数。这意味着，修
改形式参数会影响实际参数。
*/
void swap_ying(int& x, int& y)
{
	int temp;
	temp = x; /* 保存地址 x 的值 */
	x = y;    /* 把 y 赋值给 x */
	y = temp; /* 把 x 赋值给 y  */

	return;
}