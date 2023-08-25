#include<stdio.h>
#include<string.h>
 typedef struct studentdata
{
    int roll;
    float cgpa;
    char name[100];
}stu;
int main()
{
    stu S1;;
    S1.roll=1664;
    S1.cgpa=9.7;
    strcpy(S1.name,"dushyant");
    printf("student roll=%d\n",S1.roll);
    printf("student cgpa=%0.2f\n",S1.cgpa);
    printf("student name=%s\n",S1.name);

    return 0;
    
}

