#include<iostream>
using namespace std;


class animal
{
public:
	int age=49;
};
//������̳п��Խ�����μ̳�����
//�ڼ̳�֮ǰ���Ϲؼ���virtual��Ϊ��̳�
// Animal���Ϊ�����
class sheep:virtual public animal
{

};
class tuo:virtual public animal
{

};
class sheepTuo :public sheep, public tuo
{

};
void test()
{
	sheepTuo St;
	//St.sheep::age = 10;
	St.tuo::age = 11;
	cout << St.sheep::age << endl;
	cout << St.tuo::age << endl;
	cout << St.age << endl;
}

int main() 
{
	test();
	return 0;
}