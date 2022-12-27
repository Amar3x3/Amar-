#include<stdio.h>
#include<conio.h>
#include<string.h>
void sliceee(char*str,int sl1, int sl2){
    int i = 0;
    while ((i+sl1)<sl2)
    {
        str[i]=str[i+sl1];
        i++;
    }
    str[i]='\0';
    

}
int main(){
    int slice_1,slice_2;
    char str[30];
    printf("enter 1 char to slice:-");
    scanf("%d",&slice_1);
    printf("enter 2 char to slice:-");
    scanf("%d",&slice_2);
    printf("enter :-");
    scanf("%s",str);
    sliceee(str,slice_1,slice_2);
    printf("%s",str);
    return 0;

}