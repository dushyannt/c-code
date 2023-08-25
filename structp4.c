#include<stdio.h>
struct time
{
    int hrs;
    int min;
    int sec;
};
int main()
{
   struct time t1,t2,t3;
   int h,m,s,diff;

   printf("***Enter 1st Time***\n");
   printf("enter Hours\n");
   scanf("%d",&t1.hrs);
   printf("enter Min\n");
   scanf("%d",&t1.min);         
   printf("enter Second\n");
   scanf("%d",&t1.sec);
   printf("***Enter 2nd Time***\n");
   printf("enter Hours\n");
   scanf("%d",&t2.hrs);
   printf("enter Min\n");
   scanf("%d",&t2.min);
   printf("enter Second\n");
   scanf("%d",&t2.sec);

   printf( "%d : %d : %d\n",t1.hrs,t1.min,t1.sec );
   printf( "%d : %d : %d\n",t2.hrs,t2.min,t2.sec );

   printf("time differnce\n");
   t1.hrs=t1.hrs*3600;
   t1.min=t1.min*60;
   t2.hrs=t2.hrs*3600;
   t2.min=t2.min*60;
   diff=(t2.hrs+t2.min+t2.sec) - (t1.hrs+t1.min+t1.sec);
   t3.hrs=diff/3600;
   t3.min=(diff%3600)/60;
   t3.sec=(diff%3600)%60;

   printf("duration is %dHrs : %dMin : %dSec ",t3.hrs,t3.min,t3.sec);
   return 0;
}