#include<stdio.h>
int main() {
    int i,n,temp,y,k=0,r;
    printf("enter the number\n");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        r=n%10;
        k=k*10+r;
        n=n/10;
    }
    if(temp==k)
    printf("it is a palindrome\n");
    else
    printf("not a palindrme\n");
    return 0;
}
