#include<iostream>
using namespace std;
/*����ĳ�ʼ�������*/
class person {
	//1.���캯��
public:
	person() {
		cout << "This is the call to the default constructor" << endl;
	}
	person(int a,int m_heigth) {
		age = a;
		height=new int(m_heigth);
		cout << "This is the call to the constructor with arguments 2" << endl;
	}
	/*�������캯��*/
	//person(const person& p) {
	//	age = p.age;
	//	height = p.height;//������Ĭ��
	//	cout << "�������캯���ĵ���" << endl;
	//}
	/*���ǳ��������*/
	person(const person& p) {
		cout << "Deep copy function call" << endl;
		age = p.age;
		//�������
		height = new int(*p.height);
		
	}
	~person() {
		//�ͷŶ���������
		if (height != NULL) {
			delete height;
			height = NULL;
		}
		cout << "This is the default destructor call" << endl;
	}
	int age;
	int* height;
};

/*����*/
//void test1() {
//	/*Ĭ�ϵ���*/
//	person p1;
//	person p2(10);
//	person p21 = person(10);
//	person p22 = 10;
//	person p3(p2);
//	person p31 = person(p2);
//	person p32 = p1;
//	cout << "p2�����䣺" <<p2.age<<endl;
//	person(10);//��������ĵ��ã��ᱻ�����ͷ�
//	cout << "aaa" << endl;
//}

/*�������캯���ĵ���*/
//ֵ���ݵķ�ʽ������������
void dowork(person p) {

}
void test2() {
	person p;
	dowork(p);
}
//ֵ��ʽ���ؾֲ�����
person dowork1() {
	person p1;
	cout << (int*)&p1 << endl;
	return p1;
}
void test3() {
	person p2 = dowork1();
	cout << (int*)&p2 << endl;
}


/*�����ǳ����*/
void test4() {
	person p1(18,160);
	cout << "p1 year" << p1.age << "p2 height " << *p1.height << endl;
	cout << (int*)&p1.height << endl;
	person p2(p1);
	cout << "p2 year " << p2.age <<"p2 height "<< *p2.height<<endl;
	cout << (int*)&p2.height << endl;
}
int main() {
	test4();
	return 0;
}