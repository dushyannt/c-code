#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    char ch;
    char s[20], sen[100];
    scanf("%c", &ch);
    getchar();
    gets(s);
  
    gets(sen);
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    return 0;
}

