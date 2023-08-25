#include<stdio.h>
#include<stdlib.h>
int main() 
{
    int a[100],*p;
    int n,l,sume=0,sumo=0;
    printf("enter the size\n");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("enter the elements of array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    for(int i=0;i<n;i++)
    {
        if(*(p+i)%2==0)
        {

            sume=sume+*(p+i);
            
        }
        else
        {
            sumo=sumo+*(p+i);
        }
    }
    printf("sum of even elements %d\n",sume);
    printf("sum of odd elements %d\n",sumo);
    return 0;
    

}