#include<stdio.h>
#include<conio.h>
void swap(int *x,int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
int main(){
    int a=5,b=6;
    printf("values without swap:-%d and %d\n",a,b);
    swap(&a,&b);
    printf("values with swap:-%d and %d",a,b);
return 0;

}