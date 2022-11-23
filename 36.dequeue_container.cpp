#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;


/*
deque��һ��˫�˶�������
*/
void PrintDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	PrintDeque(d1);
	deque<int>d2(d1.begin(), d1.end());
	PrintDeque(d2);
	deque<int>d3(10, 100);
	PrintDeque(d3);
	deque<int>d4(d3);
	PrintDeque(d4);
}
void test02()
{
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}    
	PrintDeque(d1);

	//operator=��ֵ
	deque<int>d2;
	d2 = d1;
	PrintDeque(d2);
	//assign��ֵ
	deque<int>d3;
	d3.assign(d1.begin(), d1.end());
	PrintDeque(d3);
	deque<int>d4;
	d4.assign(10, 100);
	PrintDeque(d4);
}
void test03()
{
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	PrintDeque(d1);
	if (d1.empty())
	{
		cout << "empty" << endl;
	}
	else
	{
		cout << "no empty" << endl;
	}
	//deque����û����������
	cout << "capacity" << d1.size() << endl;
	//����ָ����С,�����
	d1.resize(15, 1);
	PrintDeque(d1);
	d1.resize(5);
	PrintDeque(d1);
}
//���˲���
void test04()
{
	deque<int>d1;
	//β��
	d1.push_back(10);
	d1.push_back(20);

	//ͷ��
	d1.push_front(100);
	d1.push_front(200);

	PrintDeque(d1);
	//βɾ
	d1.pop_back();
	PrintDeque(d1);

	//ͷɾ
	d1.pop_front();
	PrintDeque(d1);
}
void test05()
{
	deque<int>d2;
	//β��
	d2.push_back(10);
	d2.push_back(20);

	//ͷ��
	d2.push_front(100);
	d2.push_front(200);

	PrintDeque(d2);

	//insert����
	d2.insert(d2.begin(), 1000);
	PrintDeque(d2);

	d2.insert(d2.begin(), 2, 10000);
	PrintDeque(d2);

	//����������в���
	deque<int>d3;
	d3.push_back(1);
	d3.push_back(2);
	d3.push_back(3);

	d2.insert(d2.begin(), d3.begin(), d3.end());
	PrintDeque(d2);
}
void test06()
{


	deque<int>d4;
	//β��
	d4.push_back(10);
	d4.push_back(20);

	//ͷ��
	d4.push_front(100);
	d4.push_front(200);

	PrintDeque(d4);

	//ɾ��
	deque<int>::iterator it = d4.begin();
	it++;
	d4.erase(it);
	PrintDeque(d4);

	//�������䷽ʽɾ��
	d4.erase(d4.begin(), d4.end());
	PrintDeque(d4);
	//���
	d4.clear();
	PrintDeque(d4);
}
void test07()
{
	deque<int>d1;
	for (int i = 0; i < 3; i++)
	{
		d1.push_back(i);
	}
	d1.push_front(100);
	d1.push_front(200);
	d1.push_front(300);

	//ͨ��[]��ʽ����Ԫ��
	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1[i] << " ";
	}
	cout << endl;
	//ͨ��at��ʽ����Ԫ��
	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1.at(i) << " ";
	}
	cout << endl;

	cout << "the frist data" << d1.front() << endl;
	cout << "the last data" << d1.back() << endl;
}
/*sort�㷨*/
void test08()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_back(30);
	d1.push_front(100);
	d1.push_front(200);
	d1.push_front(300);

	PrintDeque(d1);

	//����-Ĭ������
	//����֧��������ʵĵ�������������������sort�㷨�����������
	//vector����Ҳ��������sort��������
	cout << "after queue" << endl;
	sort(d1.begin(), d1.end());
	PrintDeque(d1);

}
int main()
{

	test03();
	system("pause");
	return 0;
}