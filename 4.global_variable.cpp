#include <iostream>
using namespace std;

/*
1.ȫ�ֱ���
2.�ֲ�����
*/

//1. ȫ�ֱ�������
int g=10;

//2.����
//������ʵ�Ǹ���������������ǽ������ֺͱ�����ֵ����һ��
void func()
{
    int val=100;
    cout<<val<<endl;
    int &val_one=val;
    cout<<val_one<<endl;
    val_one=10;
    cout<<val<<endl;
}

//3.�ֲ�����
void func1()
{
    // �ֲ���������
   int a, b;
   // ʵ�ʳ�ʼ��
   a = 10;
   b = 20;
   int g=100;
   //���ʿ�������
   cout<<g<<" "<<a<<endl;
   //��ʾ����ȫ�ֱ���
   cout<<::g<<endl;
}

//3.�ֲ���̬����
//practice6.1.1
//practice6.7
int func6_7()
{
    static int i=0; //�ֲ���̬������������Ϊ�������������٣����Ǿֲ�������
    return i++;
}
void practice6_7()
{
    int num;
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cout<<func6_7()<<endl;
    }
}


int main()
{
    practice6_7();
   return 0;
}
