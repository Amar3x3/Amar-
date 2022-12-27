#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    int r_p,r_n;
    int n1,n2;
    printf("enter original number: ");
    scanf("%d",&n);
    int x=n;
    int reverse_num = 0;
    if (n>10000){
    reverse_num += x/10000;

    x = x - ((x / 10000) * 10000);
    reverse_num += ((x/1000) * 10 );

    x = x - ((x / 1000) * 1000);
    reverse_num += ((x/100) * 100 );

    x = x - ((x / 100) * 100);
    reverse_num += ((x/10) * 1000 );

    x = x - ((x / 10) * 10);
    reverse_num += ((x%10) * 10000 );
    }else
    if (n<10000 && n>=1000){
    reverse_num += x/1000;

    x = x - ((x / 1000) * 1000);
    reverse_num += ((x/100) * 10 );


    x = x - ((x / 100) * 100);
    reverse_num += ((x/10) * 100 );

    x = x - ((x / 10) * 10);
    reverse_num += ((x%10) * 1000 );
    }else
    if(n<1000 && n>=100){
    reverse_num += x/100;

    x = x - ((x / 100) * 100);
    reverse_num += ((x/10) * 10 );

    x = x - ((x / 10) * 10);
    reverse_num += ((x%10) * 100 );

    }else
    if(n<100){
        reverse_num += x/10;  // 0+2

    x = x - ((x / 10) * 10);// 23-20 =3
    reverse_num += ((x%10) * 10 );//2+30=32

    }
    if (n==reverse_num)
    {
        printf("entered number is a palindrome");
    }else if(n!=reverse_num){
        printf("\nenterd number is not palindrome");
        n1=n;
        while (n1!=reverse_num)
        {
            n1++;
            reverse_num=0;
            x=n1;
            if (n1>10000){
    reverse_num += x/10000;

    x = x - ((x / 10000) * 10000);
    reverse_num += ((x/1000) * 10 );
  
    x = x - ((x / 1000) * 1000);
    reverse_num += ((x/100) * 100 );

    x = x - ((x / 100) * 100);
    reverse_num += ((x/10) * 1000 );

    x = x - ((x / 10) * 10);
    reverse_num += ((x%10) * 10000 );
    }else
    if (n1<10000 && n1>=1000){
    reverse_num += x/1000;

    x = x - ((x / 1000) * 1000);
    reverse_num += ((x/100) * 10 );

    x = x - ((x / 100) * 100);
    reverse_num += ((x/10) * 100 );

    x = x - ((x / 10) * 10);
    reverse_num += ((x%10) * 1000 );
    }else
    if(n1<1000 && n1>=100){
    reverse_num += x/100;

    x = x - ((x / 100) * 100);
    reverse_num += ((x/10) * 10 );

    x = x - ((x / 10) * 10);
    reverse_num += ((x%10) * 100 );
    }else
    if(n1<100){
        reverse_num += x/10;

    x = x - ((x / 10) * 10);
    reverse_num += ((x%10) * 10 );
    }
        }
        

    
    printf("\nn1 :%d",n1);

    n2=n;
    while (n2!=reverse_num)
    {
        n2--;
        reverse_num=0;
        x=n2;
    if (n2>10000){
    reverse_num += x/10000;

    x = x - ((x / 10000) * 10000);
    reverse_num += ((x/1000) * 10 );

    x = x - ((x / 1000) * 1000);
    reverse_num += ((x/100) * 100 );

    x = x - ((x / 100) * 100);
    reverse_num += ((x/10) * 1000 );

    x = x - ((x / 10) * 10);
    reverse_num += ((x%10) * 10000 );
    }else
    if (n2<10000 && n2>=1000){
    reverse_num += x/1000;

    x = x - ((x / 1000) * 1000);
    reverse_num += ((x/100) * 10 );

    x = x - ((x / 100) * 100);
    reverse_num += ((x/10) * 100 );

    x = x - ((x / 10) * 10);
    reverse_num += ((x%10) * 1000 );
    }else
    if(n2<1000 && n2>=100){
    reverse_num += x/100;

    x = x - ((x / 100) * 100);
    reverse_num += ((x/10) * 10 );

    x = x - ((x / 10) * 10);
    reverse_num += ((x%10) * 100 );
    }else
    if(n2<100){
        reverse_num += x/10;

    x = x - ((x / 10) * 10);
    reverse_num += ((x%10) * 10 );
    }

    }
    
    printf("\nn2 : %d",n2);
    r_p = n1 - n;
    r_n = n - n2;
    printf("\nposi_diff :%d",r_p);
    printf("\nnegi_diff :%d",r_n);
    if (r_p<r_n)
    {
        printf("\n%d number is nearest palindrome to your entered number",n1);
    }else if (r_p>r_n)
    {
        printf("\n%d number is nearest palindrome to your entered number",n2);
    }else if (r_p==r_n)
    {
        printf("\nboth %d number and %d number are nearest to your entered number",n1,n2);
    }
    }
return 0; 
}
    