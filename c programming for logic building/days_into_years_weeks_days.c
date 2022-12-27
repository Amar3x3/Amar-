#include<stdio.h>
#include<conio.h>
int main(){
  int days,weeks,dayss;
  int years,months;
  printf("enter days :-");
  scanf("%d",&days);
  years=days/365;
  months=(days%365)/30;
  weeks=((days%365)%30)/7;
  dayss=(((days%365)%30)%7);
  printf("convertinng...................\n");
  printf("years:%d \n months:%d \n weeks:%d \n days:%d ",years,months,weeks,dayss);
  return 0;

}