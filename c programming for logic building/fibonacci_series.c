#include<conio.h>
#include<stdio.h>
int main(){
    int num,first_no=0,second_no=1;
    FILE*ptr;
    printf("enter the range for fibonaccci series:-");
    scanf("%d",&num);
    int fib;
                                                        ptr=fopen("fib.txt","w");
    for (int i = 0; i <= num; i++)
    {
    fib=first_no+second_no;
    first_no=second_no;
    second_no=fib;
    printf("%d",fib);
    printf(" ");
                                                        fprintf(ptr,"%d",fib);
                                                        fprintf(ptr," ");
    }
                                                        fclose(ptr);
    return 0;
    
}