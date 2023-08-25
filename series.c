#include<stdio.h>
void factsum(int *);
int main(){
    int n;
   
    printf("enter the value of n \n");
    scanf("%d",&n);
    
    factsum(&n);
    return 0;
}
 
 void factsum(int *n)
 { int sum=0,fact=1;

     for(int i=1;i<=*n;i++)
  { 
        fact=fact*i;

  }
    printf("%d",fact);





 }
