#include<iostream>
#include<vector>
#include<deque>
#include<time.h>
#include<algorithm>

using namespace std;
class person
{
public:
	person(string m_name, int m_score) {
		this->name = m_name;
		this->score = m_score;
	}
	string name;
	int score;
};

void creatPerson(vector<person>& vv)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "player";
		name += nameSeed[i];
		int score = 0;
		person p(name, score);
		vv.push_back(p);
	}
}
void setscore(vector<person>& vv)
{
	int avg;
	for (vector<person>::iterator it = vv.begin(); it != vv.end(); it++) {
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 61+40;
			d.push_back(score);
		}
		sort(d.begin(), d.end());
		d.pop_back();
		d.pop_front();
		int num = 0;
		for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
		{			
			num += *it;
		}
		 avg = num / d.size();
		it->score = avg;
	}
}
void showscore(vector<person>& v)
{
	for (vector<person>::iterator it = v.begin(); it != v.end(); it++) {
		cout << it->name << " " << it->score << endl;
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	//1.创建5名选择
	vector<person>v;
	creatPerson(v);
	/*for (vector<person>::iterator it = v.begin(); it != v.end(); it++) {
		cout << (*it).name << " " << (*it).score << endl;
	}*/
	//2.给选手打分
	setscore(v);
	//3.显示分数
	showscore(v);

	return 0;
}