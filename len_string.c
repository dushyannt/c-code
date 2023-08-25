#include<stdio.h>
int main() {
    char a[100],*p;
    int l;
    printf("enter the string\n");
    gets(a);
    p=a;
    for(l=0;*(p+l)!='\0';l++);
    printf("%d",l);
    return 0;

}