#include<stdio.h>
#include<conio.h>
int main(){
    int c;
    int ctr=0;
    printf("enter capacity for array:");
    scanf("%d",&c);
    int a[c];
    int b[c];
    printf("enter %d elements in array :\n",c);
    for (int i = 0; i < c; i++)
    {
        scanf("%d",&a[i]);
    }
    
    
    for (int i = 0; i < c; i++)
    {
        int tester=0;
        ctr=0;
        for (int j= 0; j < c; j++)
        {
            if (a[j]==a[i])
            {
                ctr++;
            }
             if(ctr>1 ){
            printf("element %d is present :: %d times\n",a[i],ctr);
           
        }
        
         }
        
        
        
    }
    return 0;
    
    

}