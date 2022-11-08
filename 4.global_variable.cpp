#include <iostream>
using namespace std;

//1. 全局变量声明
int g=10;

//2.引用
//引用其实是给对象起别名，就是将新名字和变量的值绑定在一块
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
   // 局部变量声明
   int a, b;
   // 实际初始化
   a = 10;
   b = 20;
   int g=100;
   //访问块作用域
   cout<<g<<" "<<a<<endl;
   //显示访问全局变量
   cout<<::g<<endl;

   //2.
   func();
   return 0;
}
