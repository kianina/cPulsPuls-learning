#include <iostream>
using namespace std;
//1.���峣��
#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'


int main()
{
	//2.ת���ַ�
	cout << "Hello\t\vWorld\n\n";

	int area;
	area = LENGTH * WIDTH;
	cout << area;
	cout << NEWLINE;

	//3.const�ؼ���
	const int  LENGTH1 = 10;
	const int  WIDTH1= 6;
	const char NEWLINE1 = '\n';
	int area1;
	area1 = LENGTH * WIDTH1;
	cout << area1;
	cout << NEWLINE1;

	//4.���η�����
	short int i; //������
	short unsigned int j; //�޷��Ŷ�����
	j = 50000;
	i = j;
	cout << i << " " << j;
	return 0;

}