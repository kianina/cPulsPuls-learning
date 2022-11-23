#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class five
{
public:
	bool operator()(int val) {
		return val > 5;
	}
};

class MyCompare
{
public:
	bool operator()(int val1, int val2)
	{
		return val1 > val2;
	}
};

void test() {
	vector<int>v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	vector<int>::iterator it=find_if(v.begin(), v.end(), five());
	if (it == v.end()) {
		cout << " " << endl;
	}
	else { 
		cout << *it << endl;
	}
}
void test1() {
	vector<int>v;
	v.push_back(12);
	v.push_back(14);
	v.push_back(16);
	v.push_back(11);
	sort(v.begin(), v.end());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	sort(v.begin(), v.end(), MyCompare());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}
int main() {
	test1();
	return 0;
}