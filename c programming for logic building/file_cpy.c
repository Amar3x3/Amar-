#include<stdio.h>
#include<conio.h>
int main(){
    FILE*ctr1;
    FILE*ctr2;
    ctr1=fopen("a0.txt","r");
    ctr2=fopen("b0.txt","w");
    char c= fgetc(ctr1);
    while (c!=EOF)
    {
        fputc(c,ctr2);
        c = fgetc(ctr1);
    }
    fclose(ctr1);
    fclose(ctr2);
    return 0;
    


}