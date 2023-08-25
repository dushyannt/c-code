#include<stdio.h>
int main(){

    FILE *fp;
    int num,quantity,price,i,value;
    char filename[10],name[10];
    printf("enter file name\n");
    scanf("%s",filename);
    fp=fopen(filename,"w");
    printf("Input inventry data\n");
    printf(" Item-name  Number  Price  Quantity\n  ");
    for(i=0;i<=3;i++)
    {
        fscanf(stdin,"%s %d %d %d", name,&num,&price,&quantity);
        fprintf(fp,"%s %d %d %d",name,num,price,quantity);
    }
    fclose(fp);
    printf("\n\n");
    fp=fopen(filename,"r");
    printf("item-name number price quantity value\n");
    for(i=0;i<=3;i++)
    {
        fscanf(fp,"%s %d %d %d", name,&num,&price,&quantity);
        value=price*quantity;
        fprintf(stdout,"%s    %d    %d    %d    %d\n",name,num,price,quantity,value);
    }
    fclose(fp);
    return 0;



}