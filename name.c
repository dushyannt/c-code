#include<stdio.h>
int main() 
{
    char name[100];
    int f=0,i,j,k,p;
    printf("enter your full name:\n");
    gets(name);
    printf("%c",name[0]+32);
  
    for( i=0;name[i]!='\0';i++)
    {
        if(name[i]==32 && name[i+1]!=32)
        {   if(name[i]>=97)
            {
                printf("%c.",name[i]-32);
            }
            else
            {
                printf("%c",name[i]);
                
            }
           
        } 
        break;
    }
    for(int p=0;name[p]!='\0';p++);
    for(j=i;name[i]!='\0';i++)
    {   if(name[i]==32)
        {
        
            if(name[i+1]>=97)
            {printf("%c.",name[i+1]-32);
          
            }
            else
            {
                printf("%c",name[i+1]);
                
            }
        
        }
        break;
      
        
        for(k=p;k>=0;k--)
        {
            if(name[k]==32 && name[i+1]!=32)
            {
                for(i=k;name[i]!='\0';i++)
                { printf("%c",name[i]);}
            break;

            }
        } 

    }          
    
        return 0;

    
}

   
