#include <iostream>
using namespace std;

//1.Ϊ��������ڴ�
class Box
{
public:
	Box() {
		cout << "���ù��캯����" << endl;
	}
	~Box() {
		cout << "��������������" << endl;
	}
};
int main()
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
	return 0;
}