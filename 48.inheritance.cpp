#include<iostream>
#include<string>
using namespace std;

//����ҳ��
class BasePage
{
public:
	void header()
	{
		cout << "Home page, login registration" << endl;
	}
	void footer()
	{
		cout << "Help center, exchange and cooperation" << endl;
	}
	void left()
	{
		cout << "java,python,c++" << endl;

	}
};
//��ͨʵ��ҳ��

//javaҳ��
class Java : public BasePage
{
public:
	void contenet()
	{
		cout << "java Discipline Video" << endl;
	}
};
class Python : public BasePage
{
public:
	void contenet()
	{
		cout << "python Subject Videos" << endl;
	}
};
class Cpp : public BasePage
{
public:

	void contenet()
	{
		cout << "c++ discipline Video" << endl;
	}
};
void test()
{
	cout << "java" << endl;
	Java java;
	java.header();
	java.footer();
	java.left();
	java.contenet();

	cout << endl;

	cout << "python" << endl;
	Python python;
	python.header();
	python.footer();
	python.left();
	python.contenet();

	cout << endl;

	cout << "cpp" << endl;
	Cpp cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.contenet();
}
int main(void)
{
	test();
	return 0;
}

