#include<iostream>
using namespace std;


/*����ļ���������*/
class calcultor
{
public:
	virtual int getresult()
	{
		return 0;
	}
	int A;
	int B;
};
/*�ӷ�������*/
class Addcalcultor:public calcultor
{
public:
	virtual int getresult()     //��д�˸�����麯��
	{
		return A+B;
	}
};
/*-*/
class Subcalcultor :public calcultor
{
public:
	virtual int getresult()
	{
		return A - B;
	}
};
/***/
class Mulcalcultor :public calcultor
{
public:
	virtual int getresult()
	{
		return A * B;
	}
};
void test()
{
	//��̬ʹ������
	//����ָ���������ָ���������
	//�ӷ�
	calcultor* abc = new Addcalcultor;//����ָ��ָ���������
	abc->A = 10;
	abc->B = 107;
	cout << abc->getresult() << endl;
	delete abc;
}
int main()
{
	test();
	return 0;
}