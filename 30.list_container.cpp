#include<iostream>
#include<list>
#include<forward_list>
using namespace std;

/*
list��������������һ��˫������
forward_list��������������һ����������
*/
void printList(list<int>& l) {
	for (list<int>::iterator it = l.begin(); it != l.end(); it++) {
		cout << *it <<" ";
	}
	cout << endl;
}
//��ʼlist����
void test1() {
	list<int>l;
	l.push_back(12);
	l.push_back(15);
	l.push_back(1);
	l.push_back(62);
	l.push_back(22);
	printList(l);
	list<int>l1(l.begin(), l.end());
	printList(l1);
}
//list������ֵ�ͽ���
void test2() {
	list<int>l;
	l.push_back(12);
	l.push_back(15);
	l.push_back(1);
	l.push_back(62);
	l.push_back(22);
	printList(l);
	list < int>l1;
	l1.push_back(14);
	l1.push_back(15);
	l1.push_back(98);
	l1.push_back(95);
	l1.push_back(19);
	printList(l1);
	l1.swap(l);
	printList(l);
	printList(l1);
}
//�鿴list�����Ĵ�С
void test3()
{
	list<int>l1;
	l1.push_back(1);
	l1.push_back(2);
	l1.push_back(3);
	l1.push_back(4);
	printList(l1);
	if (l1.empty())
	{
		cout << "empty" << endl;
	}
	else
	{
		cout << "no empty" << endl;
		cout << "the number of data" << l1.size() << endl;
	}
	//����ָ����С
	l1.resize(10, 1000);  
	printList(l1);
}

//list��������ɾ�Ĳ�
void test4()
{
	list<int>l1;
	//β
	l1.push_back(1);
	l1.push_back(2);
	l1.push_back(3);
	l1.push_back(4);
	//ͷ
	l1.push_front(10);
	l1.push_front(20);
	printList(l1);
	//ɾ
	l1.pop_back();
	printList(l1);
	l1.pop_front();
	printList(l1);
	//����
	list<int>::iterator it = l1.begin();
	it++;
	l1.insert(it, 1000);
	printList(l1);
	//ɾ��
	//�õ�ʱ��ָ��it
	it = l1.begin();
	l1.erase(++it);
	printList(l1);
	//�Ƴ�
	l1.push_back(1000);
	l1.push_back(1000);
	l1.push_back(1000);
	printList(l1);
	l1.remove(1000);//ɾ������ƥ���Ԫ��
	printList(l1);
	//���
	l1.clear();
	printList(l1);
}
void test5()
{
	list<int>l1;
	l1.push_back(1);
	l1.push_back(2);
	l1.push_back(3);
	l1.push_back(4);
	//list�в�������[]���������е�Ԫ��
	//at()Ҳ����
	//��ΪList�������������������������Կռ�洢���ݣ�������Ҳ�ǲ�֧��������ʵ�
	cout << "the frist data" << l1.front() << endl;
	cout << "the last data" << l1.back() << endl;
	//��֤�������ǲ�֧��������ʵ�
	list<int>::iterator it = l1.begin();
	it++;//֧��++ --  ˫��
	it--;
	//it = it+1;���С�����֧���������
}

//��ת�����ڵ�Ԫ��
void test6()
{
	list<int>l1;
	l1.push_back(1);
	l1.push_back(2);
	l1.push_back(3);
	l1.push_back(4);
	cout << "begin of reverse" << endl;
	printList(l1);
	//��ת
	cout << "after of reverse" << endl;
	l1.reverse();
	printList(l1);
}

bool myCompare(int v1, int v2)
{
	//���� ��һ����>�ڶ�����
	return v1 > v2;
}
//����
void test7()
{
	list<int>l2;
	l2.push_back(20);
	l2.push_back(10);
	l2.push_back(50);
	l2.push_back(30);
	l2.push_back(40);
	cout << "begin of queue" << endl;
	printList(l2);
	//���в�֧��������ʵ������������������ñ�׼�㷨
	//��֧��������ʵ��������������ڲ����ṩ��Ӧ��һЩ�㷨
	cout << "after of queue" << endl;
	l2.sort();
	printList(l2);
	l2.sort(myCompare);//����
	printList(l2);
}

//forward����,�����е�Ԫ�ؽ�����ɾ�Ĳ�
void test8()
{
    forward_list<int> list={0,1,2,3,4,5,6,7,8,9};
    for(forward_list<int>::iterator it=list.begin();it!=list.end();it++)
    {
        cout<<*it<<" ";
    }
    //1.ɾ������Ԫ��
    auto prev = list.before_begin(); //��ʾlist����ǰԪ��(�����е�ͷ���)
    auto curr = list.begin();  //��ʾlist�ĵ�һ��Ԫ��
    while(curr!=list.end())
    {
        if(*curr%2){
            curr=list.erase_after(prev); //erase_after:ɾ��prev֮���һ��Ԫ��
                                        //����һ����ɾ��Ԫ��֮���һ���ڵ�λ�õ�ָ��
        }
        else{
            prev=curr;
            ++curr;
        }
    }
    cout<<endl;
    for(forward_list<int>::iterator it=list.begin();it!=list.end();it++)
    {
        cout<<*it<<" ";
    }
}
int main() {
    test8();
	return 0;
}