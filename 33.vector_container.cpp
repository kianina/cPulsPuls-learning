#include<iostream>
using namespace std;
#include<algorithm>
#include<string>
#include<vector>

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//vector��������
void test()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	printVector(v);
	//ͨ������ķ�ʽ���й���
	vector<int>v1(v.begin(), v.end());
	printVector(v1);
	//n��elem��ʽ����
	vector<int>v3(10, 100);//10��100
	printVector(v3);
	//��������
	vector<int>v4(v3);
	printVector(v4);
}

void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);
	//��ֵ operator= 
	vector<int>v2;
	v2 = v1;
	printVector(v2);
	//assign
	vector<int>v3;
	v3.assign(v1.begin(), v1.end());//ʹ��assign��v3�е�Ԫ���滻�ɵ�������Χ�ڵ�Ԫ��
	printVector(v3);
	//n��elem��ʽ��ֵ
	vector<int>v4;
	v4.assign(10, 100);//10��100���滻��n��ֵ��100��Ԫ��
	printVector(v4);
}

//��vector��������ָ����С
void test02()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);
	//�ж��Ƿ��ǿ�
	if (v1.empty()) {
		cout << "kong" << endl;
	}
	else {
		cout << "bu kong" << endl;
	}
	cout << "the capacity of v1" << v1.capacity() << endl;
	cout << "the size of v1" << v1.size() << endl;
	//����ָ����С
	v1.resize(15, 100);//�������ذ汾������ָ��Ĭ�����ֵ���ڶ�������
	printVector(v1);//�������ָ���ı�ԭ���ĳ���Ĭ����0���
	v1.resize(5);
	printVector(v1);//�������ָ���ı�ԭ���̣������Ĳ��ֻ�ɾ����	
}

//vector��������ɾ�Ĳ�
void test03()
{
	vector<int>v1;
	//β�巨
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	//����
	printVector(v1);
	//βɾ
	v1.pop_back();
	printVector(v1);
	//����
	v1.insert(v1.begin(), 100);
	printVector(v1);
	v1.insert(v1.begin(), 2, 1000);
	printVector(v1);
	//ɾ�� ����Ҳ�ǵ�����
	v1.erase(v1.begin());
	printVector(v1);
	//���
	//v1.erase(v1.begin(), v1.end());
	v1.clear();
	printVector(v1);
}
//vector���� ���ݴ�ȡ
void test04()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	//����[]���������е�Ԫ��
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	//����at��ʽ����Ԫ��
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;

	//��ȡ��һ��Ԫ��
	cout << "the frist data" << v1.front() << endl;

	//��ȡ���һ��Ԫ��
	cout << "the last data" << v1.back() << endl;
}
void test05()
{
	vector<int>v1;
	cout << "begin change" << endl;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);
	vector<int>v2;

	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	printVector(v2);
	cout << "after change" << endl;
	v1.swap(v2);
	printVector(v1);
	printVector(v2);
}
//����swap���������ڴ�ռ�
void test06()
{
	vector<int>v;
	for (int i = 0; i < 10000; i++)
	{
		v.push_back(i);
	}

	cout << "capacity" << v.capacity() << endl;
	cout << "size" << v.size() << endl;
	cout << endl;
	v.resize(3);//����ָ����С
	cout << "capacity" << v.capacity() << endl;
	cout << "size" << v.size() << endl;
	//����swap�����ڴ�
	vector<int>(v).swap(v);
	cout << endl;
	cout << "capacity" << v.capacity() << endl;
	cout << "size" << v.size() << endl;
}
//vector���� Ԥ���ռ�
void test07()
{
	vector<int>v1;
	int num = 0;//ͳ�ƿ��ٴ���
	int* p = NULL;
	v1.reserve(100000);
	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);

		if (p != &v1[0])
		{
			p = &v1[0];
			num++;
		}
	}
	cout << num << endl;
}

//ʹ��swap����
void test08()
{
    vector<int> str1;
    vector<int> str2;
    for(int i=0;i<10;i++)
    {
        str1.push_back(i+3);
    }
    for(int i=0;i<20;i++)
    {
        str2.push_back(i);
    }
    printVector(str1);
    printVector(str2);
    swap(str1,str2);  //ʹ��swap����ֱ�ӽ���
    printVector(str1);
    printVector(str2);
}
int main()
{
	test08();
	return 0;
}