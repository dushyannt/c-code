#include<stdio.h>
#include<stdlib.h>
void rotate(int *p,int ,int );
int main()
{
    int *p,i,n,r ;
    p=(int *)malloc(n*sizeof(int));
    printf("enter the size of the array\n");
    scanf("%d",&n);
    printf("enter number of times you want to rotate\n");
    scanf("%d",&r);
    rotate(p,n,r);
    
    return 0;
}

void rotate(int *p,int n,int r)
{
    int i,j,temp;
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<r;i++)
    {   temp=*(p);
        for(int j=0;j+1<n;j++)
        {   
            *(p+j)=*(p+j+1);
        }
        *(p+n-1)=temp;

    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(p+i));
    }
     

}