#include<iostream>
using namespace std;

int main()
{
    int m[]={1,2,3,4,5,6,7,8,9,0};
    int(*p)[4]=(int(*)[4])m;
    cout<<p[1][2]<<endl;
    return 0;
}