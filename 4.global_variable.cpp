#include <iostream>
using namespace std;

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
int main()
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

   //2.
   func();
   return 0;
}
