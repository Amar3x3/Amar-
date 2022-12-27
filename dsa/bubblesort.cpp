#include <iostream>
using namespace std;
void bubblesort(int a[], int c)
{   for ( int i = 0; i < c; i++)
    {
        for (  int j= 0; j < (c-i-1); j++)
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
    

}
int main(){
    int c;
    cout<<"enter capacity of array:-";
    cin>>c;
    int array[c];
    
    cout<<"enter any"<<c<<"numbers";
    for (int i = 0; i < c; i++)
    {
        cin>>array[i];
    }
    cout<<endl<<"before sorting ";
    for (int i = 0; i < c; i++)
    {
        cout<<array[i]<<" ";
    }
    
    bubblesort(array,c);
    cout<<endl<<"after sorting ";
    for (int i = 0; i < c; i++)
    {
        cout<<array[i]<<" ";
    }
    
    return 0;
}