#include<stdio.h>
#include<conio.h>
void encrypt( char*s){
    char*p=s;
    while (*p!='\0')
    {
        *p=*p+1;
        p++;
    }
    
}
void decrypt(char*s){
    char*p=s;
    while (*p!='\0')
    {
        *p=*p-1;
        p++;
    }
}
int main(){
    char str[45];
    int opt;
    printf("enter elements to decrypt:-");
    scanf("%s",str);
    encrypt(str);
    printf("the encrypted code is :-%s\n",str);
    printf("press 1 to decrypt the code or any else number to exit:-\n");
    scanf("%d",&opt);
    if (opt==1)
    {
        decrypt(str);
        printf("%s",str);
    }else{
        printf("you have exited the code");
    }
    

    return 0 ;
}