#include<stdio.h>
#include<string.h>
void totalno(char[]);
int main(){
    char str[100];
    int  i,l,j ,f=0;
    printf("enter the string\n");
    gets(str);
    totalno(str);
    return 0;

}

void totalno( char str[])
{
    int alph=0,num=0,spch=0;
    for(int i;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            alph++;
        }
        if(str[i]>='0' && str[i]<='9')
        {
            num++;
        }
        else{
            spch++;
        }
    }
        printf("number of alpha=%d number of numirals=%d number of sp char=%d",alph, num ,spch);
        




}


