/*Write a code to print N records of students in a structure and print them in ascending order of their marks fields of structure are students name,Rollno,marks. */
#include <stdio.h>
#include <string.h>
struct studentdata
{

    char name[100];
    int roll;
    float cgpa;
};
int main()
{
    struct studentdata s[5];
    int i,n,j,temp;
    float temo;
    char tem[100];
    printf("Enter the records of student\n");
    for (i = 0; i < 5; i++)
    {

        printf("enter the name of the students\n");
        scanf("%s",&s[i].name);
        printf("enter the roll no.\n");
        scanf("%d",&s[i].roll);
        printf("enter the CGPA \n");
        scanf("%f",&s[i].cgpa);
        printf("thank you\n");

    }
     n=5;
    for(i=0;i<5;i++)
    {
        for(j=0;j<n-1-i;j++)

        {
            if(s[j].cgpa>s[j+1].cgpa)
            {

                strcpy(tem,s[j].name);
                strcpy(s[j].name,s[j+1].name);
                strcpy(s[j+1].name,tem);
                temp=s[j].roll;
                s[j].roll=s[j+1].roll;
                s[j+1].roll=temp;
                temo=s[j].cgpa;
                s[j].cgpa= s[j+1].cgpa;
                s[j+1].cgpa=temo;
                
            }


        }
        
    }
    for(i=0;i<n;i++)
    {
        printf("%d %s %f\n",s[i].roll,s[i].name,s[i].cgpa);
    }
    return 0;
}
