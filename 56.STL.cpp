#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
void myPrint(int val)
{
	cout << val << endl;
}
void test()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(7);
	v.push_back(50);
	v.push_back(0);
	vector<int>::iterator itBegin = v.begin();//��ʼ��������ָ���һ��Ԫ��
	vector<int>::iterator itEnd = v.end();//ָ�����һ��Ԫ�����һ��
	while (itBegin != itEnd)
	{
		cout << *itBegin << endl;
		itBegin++;
	}
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}
	for_each(v.begin(), v.end(),myPrint);
}
int main()
{
	test();
	return 0;
}