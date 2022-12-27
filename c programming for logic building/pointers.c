#include<conio.h>
#include<stdio.h>
#include<math.h>
int main(){
    
    int b =103;
     int *a = &b;
     int **c =  &a;
    printf(" the value of b is :-%d\n",b);
    printf(" the value of b is :-%d\n",*a);
    printf(" the address of b is :-%u\n",&b);
    printf(" the address of b is :-%u\n",a);
    printf(" the address of b is :-%u\n",&a);
    printf(" the address of b is :-%u\n",*(&a));
    printf(" the value of b is :-%d\n",**c);
    printf(" the address of b is :-%u\n",c);

   // scanf("%d",&a);

}