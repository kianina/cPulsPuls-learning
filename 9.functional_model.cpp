#include<iostream>
#include<time.h>
#include<string.h>
using namespace std;


/*
1.����
2.�����Ĳ�������
3.�����β�
4.����ָ��
*/

//��������
int max(int num1, int num2);
//int sum(int a, int e = 100);
void swap(int x, int y);
void swap_index(int* x, int* y);
void swap_ying(int& x, int& y);


//1.����
void func()
{
		//1.��������
	int c;
	c = max(3, 6);
	cout << c << endl;

	//2.����Ĭ�ϲ���
	//int number = 100;
	//int d = sum(number);
	//cout << d << endl;

	//3.��ֵ����
	// �ֲ���������
	int a = 100;
	int b = 200;
	cout <<"begin swap,a's value:" << a << endl;
	cout <<"begin swap,b's value" << b << endl;
	// ���ú���������ֵ
	swap(a, b);
	cout <<"after swap,a's value" << a << endl;
	cout <<"after swap,b's value:" << b << endl;

	//4.ָ�봫����
	cout <<"begin swap,a's value:" << a << endl;
	cout <<"begin swap,b's value:" << b << endl;
	/* ���ú���������ֵ
	 * &a ��ʾָ�� a ��ָ�룬������ a �ĵ�ַ
	 * &b ��ʾָ�� b ��ָ�룬������ b �ĵ�ַ
	 */
	swap_index(&a, &b);
	cout << "after swap,a's value:" << a << endl;
	cout << "after swap,b's value:" << b << endl;

	//5.���ô���
	cout << "begin swap,a's value" << a << endl;
	cout << "begin swap,b's value" << b << endl;
	/* ���ú���������ֵ */
	swap_ying(a, b);
	cout << "after swap,a's value" << a << endl;
	cout << "after swap,b's value" << b << endl;
}

//2.�����ò���
/*���ô��Σ����βκ�ʵ�λᱻ����һ�飬�޸��β�����޸�ʵ��*/
void func1(int &a,int &b)
{
	cout<<a+b<<endl;
	a=a+109;
	cout<<a<<endl;
}
void reference_code()
{
	int i=10,j=100;
	func1(i,j);
	cout<<i<<endl;
}

//ʹ�������βη��ض������Ϣ
string::size_type find_char(const string &chr,char c,string::size_type &occurs)
{
	auto ret=chr.size();
	occurs=0;
	for(decltype(ret) i=0;i!=chr.size();++i)
	{
		if(chr[i]==c)
		{
			if(ret==chr.size()) 
				ret=i;
			++occurs;
		}
	}
	return ret;
}
void func4()
{
	string strm("hiaehgaheghaheaihaiufhaubeyauigafhauegiahfei");
	cout<<strm.size()<<endl;
	char ch;
	string::size_type cls;
	cin>>ch;
	cout<<find_char(strm,ch,cls)<<endl;;
}

//practice6.2.3
//practice6_17
//�ж��ַ������Ƿ��д�д��ĸ
void func6_17(string str)
{
	for(auto strl:str)
	{
		if(isupper(strl))
		{
			cout<<"have a Capital letters"<<endl;
			break;
		}
	}
}
//���ַ����д��ڵĴ�д��ĸ�ĳ�Сд
void fun6_17(string str)
{
	for(auto &strl:str)
	{
		if(isupper(strl))
		{
			strl=tolower(strl);
		}
	}
	cout<<str<<endl;
}
void practice6_17()
{
	string str("hfaEEAGhaoShieJweuaifHae");
	fun6_17(str);
}


//3.���������β�
void array_parameter(int arr[],int n) //���ݵ���������׵�ַ�����鲻���Ա�����
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	cout<<sum<<endl;
}
void array_ex()
{
	int seed=time(0);
	srand(seed);
	int num;
	cin>>num;
	int arr[num];
	for(int i=0;i<num;i++)
	{
		arr[i]=i*rand()%99;
	}
	array_parameter(arr,num);
}

//���ݶ�ά����
void func_array(int arr[][10],int num) //����һ��Ԫ����һά���飨������10����������׵�ַ
{
	int sum=0;
	for(int i=0;i<num;i++)
	{
		for(int j=0;j<10;j++)
		{
			sum+=arr[i][j];
		}
	}
	cout<<sum<<endl;
}
void array_point(int (*arr)[10],int num) //����������׵�ַ
{
	int sum=0;
	for(int j=0;j<num;arr++,j++)
	{
		for(int i=0;i<10;i++)
		{
	    	sum+=(*arr)[i];
		}
	}
	cout<<sum<<endl;
}
void multi_array()
{
	int seed = time(0);
	srand(seed);
	int num1;
	int num2=10;
	cin>>num1;
	int arr[num1][10];  //����10����num2��error����ʱ���൱�ڽ�num2������arr[][10]
	for(int i=0;i<num1;i++)
	{
		for(int j=0;j<10;j++)
		{
			arr[i][j]=j+rand()%79;
		}
	}
	array_point(arr,num1);
}





//4.����ָ��
//4.1ʹ�ú���ָ��
int sum_two(int a,int b)
{
	return a+b;
}
/*��ȡ����ָ�룬���Ǻ�����*/
void func4_1()
{
	int (*plt)(int a,int b); //����һ���ͺ�����ͬ���͵�ָ��
	plt=sum_two;
	cout<<(*plt)(10,11)<<endl; //ʹ��ָ��ȥ���ú���
}
//4.2��������Ϊ���������ú���ָ��ķ�ʽ
int sum_three(int (*plt1)(int a,int b),int (*plt2)(int c,int d))
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	return (*plt1)(a,b)+(*plt2)(c,d);
}
void func4_2()
{
	int (*plt)(int a,int b);
	plt=sum_two;
	cout<<sum_three(sum_two,sum_two)<<endl;
}

int main()
{
	func4_2();
	return 0;
}







//1.��������
int max(int num1, int num2)
{
	int result;
	if (num1 > num2)
		result = num1;
	else
		result = num2;
	return result;
}
//2.Ĭ�ϲ���
int sum(int a, int e = 100)
{
	int result;
	result = a + e;
	return (result);
}
//3.��ֵ����
void swap(int x, int y)
{
	int temp;
	temp = x; /* ���� x ��ֵ */
	x = y;    /* �� y ��ֵ�� x */
	y = temp; /* �� x ��ֵ�� y */
	return;
}

//4.ָ�����
void swap_index(int* x, int* y)
{
	int temp;
	temp = *x;	/* �����ַ x ��ֵ */
	*x = *y;		/* �� y ��ֵ�� x */
	*y = temp;	/* �� x ��ֵ�� y */

	return;
}

//5.���õ���
/*
�������ݲ��������õ��÷������Ѳ����ĵ�ַ���Ƹ���ʽ������
�ں����ڣ����������ڷ��ʵ�����Ҫ�õ���ʵ�ʲ���������ζ�ţ���
����ʽ������Ӱ��ʵ�ʲ�����
*/
void swap_ying(int& x, int& y)
{
	int temp;
	temp = x; /* �����ַ x ��ֵ */
	x = y;    /* �� y ��ֵ�� x */
	y = temp; /* �� x ��ֵ�� y  */

	return;
}