#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>
#include<time.h>
using namespace std;

/*
1.sort�㷨��rand_shuff�㷨��merge�㷨��reverse�㷨
2.unique
3.ʹ��ν��
4.lambda���ʽ
*/
//sort�㷨
void myPrint(int val)
{
	cout << val << " ";
}
void myPrintString(string str)
{
    cout<<str<<" ";
}
void test1()
{
	vector<int>v;
	v.push_back(20);
	v.push_back(10);
	v.push_back(60);
	v.push_back(5);
	v.push_back(30);
	v.push_back(2);
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), myPrint);
}
//random_shuff�㷨,����Ԫ��˳��
void test3()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
}
//merge�ϲ��㷨
void test4()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 1);
	}
	//Ŀ������
	vector<int>vTarget;
	vTarget.resize(v1.size() + v2.size());
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), vTarget.end(),myPrint);
}
//reserve��ת�㷨
void test5()
{
	vector<int>v;
	v.push_back(20);
	v.push_back(10);
	v.push_back(60);
	v.push_back(5);
	v.push_back(30);
	v.push_back(2);
	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}

//unique�����ظ�����(unique���ز��ظ�ֵ��Χĩβ�ĵ�����)
void test6()
{
    vector<string> str{"ahig","qgohri","gohair","aohg","ogh","ooahgia","gohair","qgohri"};
    sort(str.begin(),str.end());
    for_each(str.begin(),str.end(),myPrintString);
    cout<<endl;
    auto end_unique=unique(str.begin(),str.end());
    for_each(str.begin(),str.end(),myPrintString);
    cout<<endl;
    str.erase(end_unique,str.end());
    for_each(str.begin(),str.end(),myPrintString);
}
//����ν�ʵķ�ʽ��Ԫ�ؽ���sort
//���ַ����ĳ��̽�������
bool isSorter(const string &s1,const string &s2)
{
    return s1.size()<s2.size();
}
void test7()
{
    vector<string> str{"ahig","qgohri","gohair","aohg","ogh","ooahgia","gohair","qgohri"};
    sort(str.begin(),str.end(),isSorter);
    for_each(str.begin(),str.end(),myPrintString);
}

//practice10.3.1
//practice10.13
bool isPartition(const string &str)
{
    return str.size()<5;
}
void practice10_13()
{
    vector<string> str{"ahig","qgohri","gohair","aohg","ogh","ooahgia","gohair","qgohri"};
    partition(str.begin(),str.end(),isPartition);
    for_each(str.begin(),str.end(),myPrintString);
}

//lambda���ʽ��������
void test8()
{
    vector<string> str{"ahig","qgohri","gohair","aohg","ogh","ooahgia","gohair","qgohri"};
    sort(str.begin(),str.end(),[](const string &str1,const string &str2){return str1.size()>str2.size();});
    for_each(str.begin(),str.end(),myPrintString);
}
//practice10.3.2
//practice10.14
void practice10_14() //��ӡ������֮��
{
    int a,b;
    auto c=[](int a,int b)->int{return a+b;};  //β�÷�������   
    cout<<c(1,3)<<endl;
}
//practice10.15
void practice10_15()  //lambda����ֵ����
{
    int data;
    cin>>data;
    auto f=[data](int b){return data+b;};
    auto j=f(10);
    cout<<j<<endl;
}
void practice10_15_2()  //lambda�������ò���
{
    int data;
    cin>>data;
    auto f=[&data](int b){return data+b;};
    auto j=f(188);
    cout<<j<<endl;
}
void practice10_15_3()  //������ʽ����
{
    int data;
    cin>>data;
    auto f=[&](int b){return data+b;};  //&��ʾ���ò���
    auto g=[=](int b){return data+b;};  //=��ʾֵ����
    auto j=f(18);
    cout<<j<<endl;
}
void test9()    //�ɱ�lambda(�����ֵ���Ըı�)
{
    int data;
    cin>>data;
    auto f=[=](int b)mutable{return ++data+b;};
    auto j=f(1);
    cout<<j<<endl;
}
//practice10.21
void practice10_21()
{
    int d;
    cin>>d;
    auto f=[&]()->bool{while(d!=0)d--; return true;}; 
    cout<<f()<<endl;  
}
int main() {
	// srand((unsigned int)time(NULL));
    practice10_21();
	return 0;
}