#include<iostream>
using namespace std;
class animal
{
public:
	//����virtual����麯��,ʵ�ֵ�ַ���
	virtual void speak()
	{
		cout << "animal speaking" << endl;
	}
};
class cat :public animal
{
public:
	 void speak() {                 //��д����ĺ���
		cout << "cat speaking" << endl;
	}
};
class dog :public animal
{
public:
	void speak()
	{
		cout << "dog speaking" << endl;
	}
};
void dospeak(animal& ani)
{
	ani.speak();
}
void test()
{
	cat catt;
	dog dogg;
	dospeak(catt);
	dospeak(dogg);
}
int main()
{
	test();
	return 0;
}