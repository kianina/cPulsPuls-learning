#include<iostream>
#include<string>
using namespace std;
class building
{
	/*��Ԫ����˽�б���*/
	friend void fun(building* build);
public:
	building()
	{
		m_room = "����";
		m_bedroom = "����";
	}
	void building1();
public:
	string m_room;
	string room;
private:
	string m_bedroom;
	string bedroom;
};

void fun(building* build)
{
	cout << build->m_room << endl;
	cout << build->m_bedroom << endl;
}
void test() {
	building build;
	fun(&build);
}

/*������Ԫ*/
class goodGay
{
public:
	building* build;

};

/*����д���ں���*/
void building::building1() {
	room = "����1";
	bedroom = "����1";
}


int main()
{
	test();
	return 0;
}