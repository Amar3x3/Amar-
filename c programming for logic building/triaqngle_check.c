#include<stdio.h>
#include<conio.h>
void triangle_check( int a, int b, int c){
    if (a+b>c && a+c>b && b+c>c)
    {
        printf("above triangle is possible ");

    }else{printf("above triangle is not possible");}
    
}
int permeter(int a, int b, int c){
    int p=a+b+c;
    return p;
}
int main(){
    int a,b,c;
    printf("enter side length:-");
    scanf("%d",&a);
    printf("enter side length:-");
    scanf("%d", &b );

    printf("enter side length:-");
    scanf("%d", &c);
    triangle_check(a,b,c);
    printf(" perimeter of triangle is :- %d",permeter(a,b,c)); 

return 0;

}