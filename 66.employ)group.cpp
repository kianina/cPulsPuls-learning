#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;
#define CHEHAU 1;
#define MEISHU 2;
#define YANFA 0;
class worker
{
public:
	string name;
	int salary;
};
void CreateWorker(vector<worker>& v) {
	string m_name = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++) {
		worker work;
		work.name = "employee";
		work.name += m_name[i];
		work.salary = rand() % 10000 + 10000;
		v.push_back(work);
	}
}
void setGroup(vector<worker>& v, multimap<int, worker>& m)
{
	for (vector<worker>::iterator it = v.begin(); it != v.end(); it++) {
		int de = rand() % 3;
		m.insert(make_pair(de, *it));
	}
}
void showWorker(multimap<int, worker>& m)
{
	cout << "Planning Department" << endl;
	multimap<int, worker>::iterator pos = m.find(1);
	int count = m.count(1);
	int index = 0;
	for (; pos != m.end()&&index<count;index++, pos++) {
		cout << "name:" << pos->second.name << " " << "pay:" << pos->second.salary << endl;
	}
	cout << "art parment" << endl;
	multimap<int, worker>::iterator pos1 = m.find(2);
	int count1 = m.count(2);
	int index1 = 0;
	for (; pos1 != m.end() && index1 < count1; index1++, pos1++) {
		cout << "name:" << pos1->second.name << " " << "pay:" << pos1->second.salary << endl;
	}
	cout << "research department" << endl;
	multimap<int, worker>::iterator pos2 = m.find(0);
	int count2 = m.count(0);
	int index2 = 0;
	for (; pos2 != m.end() && index2 < count2; index2++, pos2++) {
		cout << "name:" << pos2->second.name << " " << "pay:" << pos2->second.salary << endl;
	}
}
int main() {
	    //1.����10��Ա�����ŵ�vector��
	 vector<worker>vWorker;
	 CreateWorker(vWorker);
		//2.����vector������ȡ��ÿ��Ա���������������
	 multimap<int, worker>mWorker;
	 setGroup(vWorker, mWorker);
		//3.����󣬽�Ա�����ű����Ϊkey, ����Ա����Ϊvalue, ���뵽multimap������
	 showWorker(mWorker);
		//4.�ֲ�����ʾԱ����Ϣ
	/* for (vector<worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++) {
		 cout << it->name << " " << it->salary << endl;
	 }*/
	return 0;
}