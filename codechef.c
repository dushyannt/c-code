// Update the program below to solve the problem

#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t); // Use scanf instead of cin in C

    while (t--)
    {
        int A, B, C,i;
        scanf("%d %d", &A, &C); // Use scanf instead of cin in C
        i=(A+C);
        B=(i)/2;
        if(i%2!=0)
        {
            printf("-1");
            
        }
        else
        {
            printf("%d\n",B);
        }
    }

    return 0;
}