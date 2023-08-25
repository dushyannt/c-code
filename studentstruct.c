#include<stdio.h>
struct student
{
    int roll;
    char name[20];
    char dep[20];
    char cousre[20];
    int year;

};
void year(struct student[],int,int);
void roll(struct student[],int,int);
int main(){
struct student s[450];
int i,n,y,rolln;
printf("enter the data of students\n");
printf("how many entries do you want to make\n");
scanf("%d",&n);
for ( i=0;i<n;i++)
{
    printf("enter roll of the student,name,department,course,joining year\n");
    scanf("%d %s %s %s %d",&s[i].roll,s[i].name,s[i].dep,s[i].cousre,&s[i].year);
}
printf("enter joining year of the student to see name\n");
scanf("%d",&y);
year(s,n,y);
printf("enter roll number of the student to see name\n");
scanf("%d",&roll);
year(s,n,rolln);
return 0;
}
void  year(struct student s[],int n,int y)
{
    int i;
    for(i=0;i<5;i++)
    {
        if(s[i].year==y)
        {
            printf("%s\n",s[i].name);
        }
    }

}
void  roll(struct student s[],int n,int rolln)
{
    int i;
    for(i=0;i<5;i++)
    {
        if(s[i].roll==rolln)
        {
            printf("%s\n",s[i].name);
        }
    }

}