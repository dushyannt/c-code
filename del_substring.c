#include<stdio.h>
#include<string.h>
void del(char*,char*,int ,int );
int main() {
    char a[100],s[100],*p;
    int l1,l2;
    printf("enter the main string\n");
    gets(a);
    printf("enter the sub string\n");
    gets(s);
    l1=strlen(a);
    l2=strlen(s);
    del(a,s,l1,l2);
    puts(a);
    return 0;
}
void del(char *a,char *s, int l1,int l2)
{
    int i,j,f,p,k;
    for(i=0;i<l1;i++)
    {  f=1;
        if(*(a+i)==*s)
        {
                   
            for(j=1;j<l2;j++)
            {  
                if(*(a+i+j)!=*(s+j))
                {
                    f=0;
                    break;
                }
            }
            
               if(f==1)
                {
                for( k = i; *(a + k) != 0; k++)
					*(a + k) = *(a + k + j);
				    i--;
                    

                }

            

        }


    }

} 

    