#include<stdio.h>
int main(){

    FILE *p1,*p2;
    char c;
    printf("enter the data\n");
    p1=fopen("test.txt","w");
    while ((c=getchar()) !=EOF)
    {
        putc(c,p1);
    }
    fclose(p1);
    printf("data output");
    p1=fopen("test.txt","r");
    while ((c=getc(p1))!=EOF)
    {
        printf("%c",c);
    }
    fclose(p1);
    return 0;
}