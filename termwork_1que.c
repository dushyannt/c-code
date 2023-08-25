#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],max;
    int n,i,k=0,count=0;
    printf("Enter the characters of the string\n");
    gets(a);
    puts(a);
    for(i=0;a[i]!='\0';i++)
    {
        for(int j=0;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                count++;

            }

            

        }
            if(count>k)
            {

                max=a[i];
                k=count;
            }
        count=0;
    }     
    printf("The element with highest frequency:%c %d",max,k);
}