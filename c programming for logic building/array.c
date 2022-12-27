#include<stdio.h>
int main(){
    int a[5];
   /* a[0]=1;
    a[1]=200;
    a[2]=3;
    a[4]=75;
    a[3]=4;*/
    for (int i = 0; i < 5; i++)
    {
        printf("\nenter %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n-----------------------------\n");
    for (int i =0; i <5; i++)
    {
        printf("%d\n",a[i]);
    }
    
return 0;
}