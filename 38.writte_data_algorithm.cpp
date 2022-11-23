#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


/*
дԪ�������㷨
1.copy,replace,replace_if,swap
2.fill,fill_n��ֵ����
*/
void myPrint(int val)
{
	cout << val << " ";
}
//copy
void test1() {
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	vector<int>v2;
	v2.resize(v1.size());
	copy(v1.begin(), v1.end(), v2.begin());
	for_each(v1.begin(), v1.end(), myPrint);
	cout << endl;
	for_each(v2.begin(), v2.end(), myPrint);
}
//replace(��ֵ�����滻)
void test2()
{
	vector<int>v;
	v.push_back(20);
	v.push_back(10);
	v.push_back(60);
	v.push_back(50);
	v.push_back(30);
	v.push_back(20);

	cout << "before replacement" << endl;
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
	cout << "after replacement" << endl;
	replace(v.begin(), v.end(), 20, 2000);  
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;


}
//replace_if
class greater30
{
public:
	bool operator()(int val) {
		return val > 30;
	}
};
void test3() {
	vector<int>v;
	v.push_back(20);
	v.push_back(10);
	v.push_back(60);
	v.push_back(50);
	v.push_back(30);
	v.push_back(20);

	cout << "before replacement" << endl;
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
	cout << "after replacement" << endl;
	replace_if(v.begin(), v.end(), greater30(),300);
	for_each(v.begin(), v.end(), myPrint);
}
//swap�����㷨
void test5()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 100);
	}
	cout << "before change" << endl;
	for_each(v1.begin(), v1.end(), myPrint);
	cout << endl;

	for_each(v2.begin(), v2.end(), myPrint);
	cout << endl;
	swap(v1, v2);
	cout << "after change" << endl;
	for_each(v1.begin(), v1.end(), myPrint);
	cout << endl;

	for_each(v2.begin(), v2.end(), myPrint);
	cout << endl;
}

//fill��������ֵ��ֵ�������е�ÿһ��Ԫ��
void test6()
{
	vector<int> v1(10);
	fill(v1.begin(),v1.end(),200);
	cout<<v1[1]<<endl;
	cout<<v1.size()<<endl;

}
//fill_n��ָ��Ԫ��λ�ÿ�ʼ����ֵn��Ԫ��
void test7()
{
	vector<int> v1(18);  //��ռ�ÿռ���18
	v1={1,25,6};  //����Ԫ����ռ�ռ���3
	cout<<v1.size()<<endl;
	cout<<v1.capacity()<<endl; //����
	fill_n(v1.begin()+3,v1.capacity()-6,100);
	for(vector<int>::iterator it=v1.begin();it!=v1.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	vector<int> v2(10);
	fill_n(v2.begin(),v2.size(),300);
	for(vector<int>::iterator it=v2.begin();it!=v2.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
}
int main()
{
	test7();
	return 0;
}