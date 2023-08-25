#include<stdio.h>
#include<stdlib.h>
struct student{
    int roll;
    char name[30];
    float marks;
};

int main() {
    struct student *p;
    int n,i;
    printf("enter the number of records you want to input\n");
    scanf("%d",&n);
    p=(struct student*)malloc(n*sizeof( struct student));
    printf("Enter the records of student\n");
    for (i = 0; i < n; i++)
    {

        printf("enter the Roll no. of the students\n");
        scanf("%d",&(p+i)->roll);
        printf("enter the Name\n");
        scanf("%s",(p+i)->name);
        printf("enter the Marks \n");
        scanf("%f",&(p+i)->marks);
        printf("thank you\n");

    }
    printf("student above 80 marks\n");
    for(i=0;i<n;i++)
    {

        if((p+i)->marks>80)
        {

            printf("%s\n",(p+i)->name);

        }




    }


    return 0;
}