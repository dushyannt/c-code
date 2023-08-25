//write a code to create a structure with fields custumerid and name and check if the two records entered by the user are same
#include<stdio.h>
#include<string.h>
struct data
{
    char cus_name[100];
    int cus_id;
};
int main() {
    struct data c1,c2;
    int i,r;
    printf("enter the customer 1 details \n");
    printf("enter the name\n");
    gets(c1.cus_name);
    printf("enter the id\n");
    scanf("%d", &c1.cus_id);
    printf("enter the customer 2 details \n");
    printf("enter the name\n");
    scanf("%s",c2.cus_name);
    printf("enter the id\n");
    scanf("%d",&c2.cus_id);

    r=strcmp(c1.cus_name,c2.cus_name);
    if((r==0) && (c1.cus_id==c2.cus_id))
    {
        printf("similar inputs\n");
    }
    else{

        printf("different inputs\n");
    }

    
    return 0;

}








