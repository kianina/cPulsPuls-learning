#include<iostream>
using namespace std;
class person {
public:
	static void fun() {
		a = 10;//��̬����ֻ�ܷ��ʾ�̬����
		cout << "���Ǿ�̬��Ա����" << endl;
	}
	static int a;
};
void test() {
	person p;
	p.fun();
	person::fun();//ͨ����������
}
int main() {
	test();
	return 0;
}