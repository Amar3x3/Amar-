#include<stdio.h>
#include<conio.h>
int main(){
    int cap;
    int temp;
    printf("enter capcity to sort the number:-");
    scanf("%d",&cap);
    int a[cap];
    printf("enter %d numbers to sort :-",cap);
    for (int b = 0; b< cap; b++)
    {
        printf("\nenter %d number:-\n",b+1);
        scanf("%d",&a[b]);
    }
    
       for ( int i = 0; i < cap; i++)
    {
        for (  int j= 0; j < (cap-i-1); j++)
        {
            if (a[j]>a[j+1])                // 2 344 5 56 55 67
            {                               // 1-> 2 344 
               int temp=a[j];               // 2-> 2 5 344 
                a[j]=a[j+1];                // 3-> 2 5 56 344 
                a[j+1]=temp;                // 4-> 2 5 56 55 344
            }                               // 5-> 2 5 56 55 67 344
                                            // i=1
        }                                   // 6->
        
    }
    


    printf("sorted list is:-");
    for (int y = 0; y < cap; y++)
    {
        printf("%d",a[y]);
        printf(" ");
    }
    return 0;
    
    

}