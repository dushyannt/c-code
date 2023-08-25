#include<stdio.h>
int main(){

FILE *fp;
char ch;
fp=fopen("dush.txt","w");
printf("Enter the paragraph \n");
while ((ch==getchar()!=EOF))
{
    fputc(ch,fp);
}
fclose(fp);
return 0;









}