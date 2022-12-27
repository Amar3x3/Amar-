#include<stdio.h>
int occur(char*ptr,char*chk){
    char*ocr=ptr;
    int count=0;
    while(*ocr!='\0'){
        if (*ocr==*chk)
        {
            count++;
        }
        ocr++;
    }
    return count;
}
int main(){
    char str[10];
    char chk[2];
    int count;
    printf("enter :-");
    gets(str);
    printf("enter character to check :-");
    scanf("%s",chk);
    printf("%s\n",chk);
    count=occur(str,chk);
   printf(" number of times the character arrived is :- %d",count);
    
    return 0 ;
}