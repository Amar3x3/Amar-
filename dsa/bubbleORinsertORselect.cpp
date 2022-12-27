#include <iostream>
using namespace std;
void selecton (int a[],int m){
    int min,temp;
    for (int i = 0; i < 4; i++)
    {
        min=i;
        for (int j = i+1; j < 5 ; j++)
        {
            if (a[j]<a[min])
            {
                min=j;
            }
            temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }
        
    }
    
}
int bubblesort(int a[],int m)
{
    for (int i = 0; i < m; i++)
    {
        int temp;
        for (int j = 0; j < m-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
        
    }
    
}
int insertion(int a[],int m){
    int key,j;
    for (int i = 1; i < 5; i++)
    {
        key=a[i];
         j=i-1;
         while (j>=0 && a[j]>key)
         {
            a[j+1]=a[j];
            j--;
         }
         a[j+1]=key;
    }
    
    

}
int main (){
    int pok[5];
    int n = 5;
    int sorting_to_perform;
    cout<<"enter 5 no :-"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>pok[i];
    }
    cout<<"enter sorting to perform"<<endl;
    cin>>sorting_to_perform;
    if (sorting_to_perform==1)
    {
       bubblesort( pok,n);
       for (int i = 0; i < 5; i++)
       {
           cout<<pok[i]<<" ";
       }
       
    }
    else if (sorting_to_perform==2)
    {
        insertion(pok,n);
        for (int i = 0; i < 5; i++)
        {
            cout<<pok[i]<<" ";
        }
        
    }
    else if (sorting_to_perform==3)
    {
        selecton(pok,n);
        for (int i = 0; i < 5; i++)
        {
            cout<<pok[i]<<" ";
        }
        return 0;
    }
    
    
    

}