#include <iostream>
#include<memory>
using namespace std;


/*
1.new������
*/
//1.Ϊ��������ڴ�
class Box
{
public:
	Box() {
		cout << "have gouzao functino" << endl;
	}
	~Box() {
		cout << "have xigou function" << endl;
	}
};
void test1()
{
	//1.Ϊ���������ڴ�
	double* pvalue = NULL; // ��ʼ��Ϊ null ��ָ��
	pvalue = new double;   // Ϊ���������ڴ�
	*pvalue = 29494.99;     // �ڷ���ĵ�ַ�洢ֵ
	cout << "Value of pvalue : " << *pvalue << endl;
	delete pvalue;         // �ͷ��ڴ�
	//2.
	Box* myBoxArray = new Box[4];
	delete[] myBoxArray; // Delete array
}

//1.��ʼ����̬������������
void test2()
{
	int *pia=new int[10];
	int *pia2=new int[10]();	//��ʼ��Ϊ0
	int *pia3=new int[3]{1,2,3};
	typedef int arrT[10];
	int *p=new arrT;
	cout<<pia3[1]<<endl;
	delete [] pia3;	//�ͷŶ�̬����
	delete [] pia2;
	delete [] pia;
	delete [] p;
}
//2.����ָ��Ͷ�̬����
void test3()
{
	unique_ptr<int[]> up(new int[10]);
	for(int i=0;i!=10;i++)
	{
		up[i]=i;
	}
	cout<<up[9]<<endl;
	up.release();	//�Զ�����delete��	��ָ��
}
int main()
{
	test3();
	return 0;
}