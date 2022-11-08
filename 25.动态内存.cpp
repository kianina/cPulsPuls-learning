#include <iostream>
using namespace std;

//1.为对象分配内存
class Box
{
public:
	Box() {
		cout << "调用构造函数！" << endl;
	}
	~Box() {
		cout << "调用析构函数！" << endl;
	}
};
int main()
{
	//1.为变量分配内存
	double* pvalue = NULL; // 初始化为 null 的指针
	pvalue = new double;   // 为变量请求内存
	*pvalue = 29494.99;     // 在分配的地址存储值
	cout << "Value of pvalue : " << *pvalue << endl;
	delete pvalue;         // 释放内存

	//2.
	Box* myBoxArray = new Box[4];
	delete[] myBoxArray; // Delete array
	return 0;
}