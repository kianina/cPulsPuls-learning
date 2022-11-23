#include <iostream>
#include <vector>
using namespace std;

//1.���峣��
#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'

/*
1.�ַ���
2.vector����
3.������
*/
void func()
{
		//2.ת���ַ�
	cout << "Hello\t\vWorld\n\n";

	int area;
	area = LENGTH * WIDTH;
	cout << area;
	cout << NEWLINE;

	//3.const�ؼ���
	const int  LENGTH1 = 10;
	const int  WIDTH1= 6;
	const char NEWLINE1 = '\n';
	int area1;
	area1 = LENGTH * WIDTH1;
	cout << area1;
	cout << NEWLINE1;

	//4.���η�����
	short int i; //������
	short unsigned int j; //�޷��Ŷ�����
	j = 50000;
	i = j;
	cout << i << " " << j;
}

void string_str()
{
	string str1="hello";
	string str2("world");
	cout<<str1<<" "<<str2<<endl;
	string s;  
	cin>>s;  //�Կհ��ַ���������
	cout<<s<<endl;
}

//ʹ��getline������ȡ����
void string_getline()
{
	string line;
	while(getline(cin,line))
	{
		cout<<line<<endl;

	}
}

//practice3.4
void func1()
{
	string str1,str2;
	cin>>str1;
	cin>>str2;
	if(str1==str2)
	{
		cout<<str1<<endl;
	}
	else if(str1>str2)
	{
		cout<<str1<<endl;
	}
	else
	{
		cout<<str2<<endl;
	}
}
//�Ƚϳ���
void func2()
{
	string str1,str2;
	cin>>str1;
	cin>>str2;
	if(str1.size()==str2.size())
	{
		cout<<str1<<endl;
	}
	else if(str1.size()>str2.size())
	{
		cout<<str1<<endl;
	}
	else
	{
		cout<<str2<<endl;
	}
}

//ͳ���ַ����б����ŵĸ���
void char_num()
{
	string str("ehlsa'ahia,,ai??!!aih;");
	decltype(str.size()) puctr = 0;
	for (auto c:str)
	{
		if(ispunct(c))
		{
			++puctr;
		}
	}
	cout<<puctr<<endl;
}

//���ַ����ĳɴ�д����ʽ
void char_toupper()
{
	string str("ahieaqhie");
	for (auto &c:str) //ʹ������ȥ�޸�,��toupper�й�
	{
		c=toupper(c);
	}
	cout<<str<<endl;
	// string ch="a";
	// // string &cha=ch;
	// // cha="b";
	// ch=toupper(ch);
	// cout<<ch<<endl;
}

//�����±����㽫Сд��Ϊ��д
void string_toupper()
{
	string str;
	cin>>str;
	for(decltype(str.size())index = 0;index!=str.size();index++)
	{
		str[index]=toupper(str[index]);
	}
	cout<<str<<endl;
}

//practice3.2.3
//practice3.6
void practice3_6()
{
	string str;
	cin>>str;
	for (char &c:str) //char==auto
	{
		c='X';
	}
	cout<<str<<endl;
}
//practice3.10
void practice3_10()
{
	string str;
	cout<<"please input have baiodian"<<endl;
	cin>>str;
	string str1;
	for (auto &c:str)
	{
		if(!ispunct(c))
		{
			str1 += c;
		}
	}
	cout<<str1<<endl;
}

//vector��ʼ��
//��vector���������Ԫ��
/*�򴴽�һ���յ�vector��Ȼ����˳�������ʱ����ӽ�ȥ*/
void add_vector()
{
	vector<int> v1;
	for(int i=0;i<10;i++)
	{
		v1.push_back(i); //������β��׷��Ԫ��	
	}
}
//practice3.3.2
//practice3.14
void practice3_14()
{
	vector<int> v1;
	for(int i=0;i<3;i++){
		int num;
		cin>>num;
		v1.push_back(num);
	}
	//����vector����
	for(auto i:v1)
	{
		cout<<i<<endl;
	}
}
void practice3_15()
{
	vector<string> v1;
	for(int i=0;i<3;i++){
		string str;
		cin>>str;
		v1.push_back(str);
	}
	//����vector����
	for(auto i:v1)
	{
		cout<<i<<endl;
	}
}

//practice3.3.3
//practice3_17
void practice3_17()
{
	vector<string> v1;
	for(int i=0;i<3;i++)
	{
		string str;
		cin>>str;
		for(auto &c:str)
		{
			c=toupper(c);
		}
		v1.push_back(str);
		cout<<str<<endl;
	}
	
}
void practice3_18()
{
	//3�з�ʽ����10��44
	vector<int>v1(10,44);
	vector<int>v2=v1;
	vector<int>v3{44,44,44,44,44,44};
	vector<int>ivec(3); //��ʼ��3��int�Ķ���
	ivec[0]=55; //����һ��int�����ʼ��Ϊ55
	cout<<ivec[0]<<endl;
}
void practice3_20()
{
	vector<int>v1;
	int number=5;
	for(int i=0;i<number;i++)
	{
		int num;
		cin>>num;
		v1.push_back(num);
	}
	for(int i=0;i<number-1;i++)
	{
		cout<<v1[i]+v1[i+1]<<endl;
	}
	for(int i=0;i<number/2;i++)
	{
		cout<<v1[i]+v1[number-1-i]<<endl;
	}
}

//������
//���õ��������ĵ�һ���ַ��������ַ�
void iter_code()
{
	string str("hello world");
	if(str.begin()!=str.end())
	{
		auto it = str.begin();
		*it=toupper(*it);    //�Ե��������н�����
	}
	for(auto it=str.begin();it!=str.end();++it)
	{
		*it=toupper(*it);
	}
	cout<<str<<endl;
}

//ʹ�ü�ͷ���������
//practice3.4.1
//practice3.22
void iter_code1()
{
	string str("hello_world");
	for(auto it=str.begin();it!=str.end();it++) //cbegin���ص��ǲ����޸ĵ�ֵ
	{
		*it=toupper(*it);
	}
	cout<<str<<endl;
}
//practice3.23
void practice3_23()
{
	vector<int> v1(10);
	for(int i=0;i<10;i++)
	{
		v1[i]=i+1;
		cout<<v1[i]<<endl;
	}
	for(auto it=v1.begin();it!=v1.end();it++)
	{
		(*it)=(*it)*2;
	}
	for(int i=0;i<10;i++)
	{
		cout<<v1[i]<<endl;
	}
}

//ʹ�õ��������ж�������
void iter_search()
{
	int num=100;
	int data; //Ҫ���ҵ�ֵ
	vector<int>arr(num);
	for(int i=0;i<num;i++)
	{
		arr[i]=2*i;
	}
	auto begin=arr.begin(),end=arr.end();
	auto mid=arr.begin()+(end-begin)/2;	
	cin>>data;
	while(mid!=end && *mid!=data)
	{
		if(*mid<data)
		{
			begin=mid+1;
		}
		else
		{
			end=mid;
		}
		mid=begin+(end-begin)/2; /*������+,��Ϊiterationû��+֧������iteration���*/
	}
	if(*mid!=data)
	{
		cout<<"no search this num"<<endl;
	}
	else
	{
		cout<<"data is "<<*mid<<endl;
	}
}
int main()
{
	iter_search();
	return 0;
}