#include<stdio.h>
int main(){

FILE *f1,*f2;
char ch;
f1=fopen("hello.txt","w");
printf("ente the data\n");
while ((ch=getchar())!=EOF)
{
    fputc(ch,f1);
}
fclose(f1);
f1=fopen("hello.txt","r");
f2=fopen("hellocpy.txt","w");
while ((ch=fgetc(f1))!=EOF)
{
    fputc(ch,f2);
    /* code */
}
return 0;

}