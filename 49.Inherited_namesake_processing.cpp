#include<iostream>
using namespace std;

/*
1.�̳��е���������
2.��̳�
*/

class Page
{
public:
	  Page() {
		A = 10;
	}
	  void func() {
		  cout << "The function call of the parent class" << endl;
	  }
	  static void fun() {
		  cout << "The parent class static function calls" << endl;
	  }
	int A;
};
class Bage
{
public:
	Bage() {
		B = 110;
	}
	int B;
};
class Son :public Page
{
public:
	 Son() {
		A = 11;
	}
	 void func()
	 {
		 cout << "A member function call to a subclass" << endl;
	 }
	 static void fun() {
		 cout << "Subclass static function call" << endl;
	 }
	int A;

};
/*��̳�*/
class Son2 :public Page, public Bage
{

};

void test() {
	Son son;
	cout << son.A << endl;
	//���Ҫͨ�����������ʵ������е�ͬ����Ա����Ҫ��������
	cout << son.Page::A << endl;
}
//ͬ�������Ĵ���ʽ
void test1() {
	Son son1;
	son1.func();
	son1.fun();
	//��������г��ֺ͸���ͬ���ĳ�Ա����
	//�����ͬ����Ա�����ص�����������ͬ����Ա����
	//�����Ҫ���ʵ������б����ص�ͬ����Ա��������Ҫ��������
	son1.Page::func();
	son1.Page::fun();
}
//��̳�
void test3()
{
	Son2 son3;
	cout << son3.Bage::B << endl;
	cout << son3.Page::A << endl;
}
int main() {
	test1();
	return 0;
}