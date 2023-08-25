// Online C compiler to run C program online
#include<stdio.h>
#include<stdlib.h>
struct bank {
    char name[100];
    int acc_num;
    int balance;
};
int av_id=0;
int acc_num=999;
void open_acc(struct bank[]);
void deposit(struct bank[],int);
void withdrawl(struct bank[],int);


int main() {
    struct bank  b[100];
    int i=0,choice=0, n;
    b[i];
    printf("***WELCOME TO GRAPHIC ERA BANK***\n");
    do {
        printf("Enter the  desired service number\n");
        printf("1)Open new account\n");
        printf("2)deposit money\n");
        printf("3)withdraw money\n");
        printf("4)Exit\n");
        scanf("%d",&choice);
        i++;
        switch(choice) {
        case 1:
            open_acc(b);
            break;
        case 2:
            printf("enter n\n");
            scanf("%d",&n);
            deposit(b,n);
            break;
        case 3:
            printf("enter n\n");
            scanf("%d",&n);
            withdrawl(b,n);
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("wrong choice\n");

        }
    }while(choice!=4);
    return 0;

}

void open_acc(struct bank b[])
{   getchar();
    int i=0;
    i=av_id;
    printf("enter the name of the customer\n");
    gets(b[i].name);
    b[i].balance=0;
    printf("congratulation your account has been created\n");
    acc_num++;
    av_id++;
    printf("account holder name- %s\n",b[i].name);
    printf("account Number- %d\n",b[i].acc_num);
    printf("account Balance- %d\n",b[i].balance);
}

void deposit(struct bank b[],int n)
{
    int amount=0,y=0, i=0;
    printf("enter the account number\n");
    scanf("%d",&y);
    printf("enter the amount to deposit \n");
    scanf("%d",&amount);
    for(int i=0; i<n; i++)
    {
        if(b[i].acc_num==y)
        {
            b[i].balance=b[i].balance + amount;
        }
    }


    printf("balance in account number %d is %d ",b[i].acc_num,b[i].balance);
}

void withdrawl(struct bank b[],int n)
{
    int amount=0,y, i=0;
    printf("enter the account number\n");
    scanf("%d",&y);
    printf("enter the amount to withdraw \n");
    scanf("%d",&amount);
    for(int i=0; i<n; i++)
    {
        if(b[i].acc_num==y)
        {
            b[i].balance=b[i].balance - amount;
        }
    }


    printf("balance in account number %d is %d",b[i].acc_num,b[i].balance);
}