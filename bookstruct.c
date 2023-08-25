#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct book
{
    int acc_num;
    char author[20];
    char title[20];
    int flag;
};

void display(struct book[], int);
void new_book(struct book[], int *);
void author(struct book[], int);
void display_title(struct book[], int);
void totalno(struct book[], int);
void issue(struct book[], int);

int main()
{

    struct book b[100];
    char name[20];
    int i, choice = 0, n = 0;
    printf("***Hello Welcome to Graphic Era Library***\n");
    do
    {
        printf("Enter the  desired service number\n");
        printf("1)Display all Book Information\n");
        printf("2)Add a new Book\n");
        printf("3)Display all the book in the library of a particular author\n");
        printf("4)Display the  books in the library of a particular accession number \n");
        printf("5)Display the total Number of books in the library \n");
        printf("6)Issue a Book \n");
        printf("7)Exit \n");
        scanf("%d", &choice);
        i++;
        switch (choice)
        {
        case 1:
            display(b, n);
            break;
        case 2:
            new_book(b, &n);
            break;
        case 3:
            author(b, n);
            break;
        case 4:
            display_title(b, n);
            break;
        case 5:
            totalno(b, n);
            break;
        case 6:
            issue(b, n);
            break;
        case 7:
            break;
        default:
            printf("wrong choice\n");
        }
    } while (choice != 7);
    return 0;
}

void display(struct book b[], int n)
{
    int num = 0;
    printf("enter the accession number\n");
    scanf("%d", &num);
    for (int i = 0; i < n; i++)
    {
        if (b[i].acc_num = num)
        {

            printf("%s\n", b[i].title);
            printf("%s\n", b[i].author);
            printf("%d\n", b[i].acc_num);
        }
    }
}

void new_book(struct book b[], int *n)
{
    int number;
    char author[100], title[100];

    printf("enter the details of the books:\n");
    printf("enter the accession number\n");
    scanf("%d", &number);
    getchar();
    printf("enter the title\n");
    gets(title);
    printf("enter the author name\n");
    gets(author);
    getchar();

    strcpy(b[*n].author, author);
    strcpy(b[*n].title, title);
    b[*n].acc_num = number;
    b[*n].flag = 1;
    *n = *n + 1;
    for (int i = 0; i < *n; i++)
    {
        if (b[i].acc_num = number)
        {
            b[i].flag = 1;
            return;
        }
    }
}
void author(struct book b[], int n)
{

    getchar();
    char name[100];
    printf("enter the author name\n");
    gets(name);
    int f = 1;
    for (int i = 0; i < n; i++)
    {
        if (b[i].author == name)
        {
            int f = 0;
            printf("%s\n", b[i].title);
        }
    }
    if (f = 1)
    {
        printf("book not found\n");
    }
}
void display_title(struct book b[], int n)
{
    int num = 0, i;
    printf("enter the accession number\n");
    scanf("%d", &num);
    for (i = 0; i < n; i++)
    {
        if (b[i].acc_num = num)
        {
            printf("%s\n", b[i].title);
        }
    }
}

void totalno(struct book b[], int n)
{
    int count = 0, i;
    for (i = 0; i < n; i++)
    {
        if (b[i].flag == 1)
        {
            count++;
        }
    }

    printf("total number of books %d\n", &count);
}
void issue(struct book b[], int n)
{

    getchar();
    char author[100], title[100];
    int number;
    printf("enter the name of the author\n");
    gets(author);
    getchar;
    printf("enter the title of the book\n");
    gets(title);
    printf("enter the accession number\n");
    scanf("%d", &number);

    for (int i = 0; i < n; i++)
    {
        if (b[i].acc_num == number)
        {
            if (b[i].flag == 0)
            {
                printf("book is already issued\n");
            }
            if (b[i].flag = 1)
            {
                b[i].flag = 0;
                printf("book issued succesfully\n");
            }
        }
    }
}
