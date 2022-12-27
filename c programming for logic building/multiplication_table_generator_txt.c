#include<stdio.h>
#include<conio.h>
int main(){
    FILE*ptr;
    int num;
    printf("enter the numbers multiplication table you want to perform:-");
    scanf("%d",&num);
    ptr=fopen("table.txt","w");
    fprintf(ptr,"table of %d number \n",num);
    for (int i = 1; i < 11; i++)
    {
        fprintf(ptr,"%d X %d = %d\n",num,i,num*i);
    }
    fclose(ptr);
    printf("succes in printing table of %d number",num);
}
