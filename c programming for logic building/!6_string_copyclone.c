#include<string.h>
#include<conio.h>
#include<stdio.h>
void copy(char*str1,char*str2){
    int i= 0;
    int true=0;

    while (i<strlen(str1) || i<strlen(str2))
    {
        if (str1[i]==str2[i])
        {
            true=1;
        }else{
            true=0;
        }
        i++;
    }
    if (true==1)
    {
        printf("strins are same");
    }else{
        printf("strings are not same");
    }
    
    
}
int main(){
    char str_1[20];
    char str_2[20];
    printf("enter 1 string:-");
    scanf("%s",str_1);
    printf("enter 2 string:-");
    scanf("%s",str_2);
    copy(str_1,str_2);
    return 0;
}