#include <iostream>
using namespace std;
//1.定义常量
#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'


int main()
{
	//2.转义字符
	cout << "Hello\t\vWorld\n\n";

	int area;
	area = LENGTH * WIDTH;
	cout << area;
	cout << NEWLINE;

	//3.const关键字
	const int  LENGTH1 = 10;
	const int  WIDTH1= 6;
	const char NEWLINE1 = '\n';
	int area1;
	area1 = LENGTH * WIDTH1;
	cout << area1;
	cout << NEWLINE1;

	//4.修饰符类型
	short int i; //短整型
	short unsigned int j; //无符号短整型
	j = 50000;
	i = j;
	cout << i << " " << j;
	return 0;

}