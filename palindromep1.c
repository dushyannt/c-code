#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int  i,l,j ,f=0;
    printf("enter the string\n");
    gets(str);
    for( l=0;str[l]!='\0';l++);
    for ( i = 0,j=l-1 ; i <j ; i++,j--)
    {
        if(str[i]!=str[j])
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
    return 0;

}
