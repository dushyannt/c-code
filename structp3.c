//create a structure to perform the addition of two complex number.
#include<stdio.h>
struct complex
{
    int real;
    int img;
};

int main()
{
    struct complex c1,c2;
    int a,b;
    printf("enter the real part and imaginary part\n");
    scanf("%d %d",&c1.real,&c1.img);
    printf("enter the real part and imaginary part\n");
    scanf("%d %d",&c2.real,&c2.img);
    a=c1.real + c2.real;
    b=c1.img + c2.img;
    if(c1.img<0)
    {
        printf("%d %di",a,b);

    }
    else
    {
        printf("%d + %di",a,b);
    }

    return 0;
}
