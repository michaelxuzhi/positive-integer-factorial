#include<iostream>
using namespace std;
int main()
{
 int n,i,j=1;
 cout<<"请输入正整数n:"<<endl;
 cin>>n;
 for(i=1;i<=n;i++)
  j*=i;
 cout<<"正整数"<<n<<"的阶乘为:"<<j<<endl;
    return 0;
}