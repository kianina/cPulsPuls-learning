#include<iostream>
using namespace std;

/*
1.���������
2.������������Ҫ������ǰ���������
*/
class build
{
public:
	/*��Ա���غ���+*/
	build operator+(build& b) {
		build temp;
		temp.A = this->A + b.A;
		temp.B = this->B + b.B;
		return temp;
	}
	int A;
	int B;
};

/*ȫ�ֺ�������+*/
// build operator+(build& a, build& b)
// {
// 	build temp;
// 	temp.A = a.A + b.A;
// 	temp.B = b.B + a.B;
// 	return temp;
// }

/*ȫ�ֺ������������*/
ostream &operator<<(ostream &cout,build &b) {
	cout << "A is " << b.A << "B is " << b.B;
	return cout;
}

void test() {
	build building;
	building.A = 10;
	building.B = 12;
	build building1;
	building1.A = 11;
	building1.B = 13;
	build building3 = building + building1;
	cout << building3.A << " " << building3.B << endl;
}

void test1() {
	build bb;
	bb.A = 12;
	bb.B = 34;
	cout << bb.A << endl;;
	cout << "\n";
	cout << bb.B;
}


int main()
{
    test1();
	return 0;
}