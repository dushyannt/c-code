// This code is not for Running
#include<iostream>
using namespace std;
int main()
{
    int n,mask=0,m,ans;
    cout<<"enter the value of n\n";
    cin>>n;
     m=n;

    if(n==0)
    {
       printf("1");
    }

    while(m!=0)
    {
        mask=(mask << 1) | 1;
        m=m >> 1;
    }
    ans=(~n) & mask ;
    printf("%d",&ans);
}