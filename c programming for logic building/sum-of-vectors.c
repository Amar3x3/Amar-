#include<stdio.h>
#include<conio.h>
struct sum_of_vectors
{
    int x;
    int y;
};
struct sum_of_vectors sumvectors(struct sum_of_vectors v1,struct sum_of_vectors v2){
    struct sum_of_vectors result;
    result.x=v1.x+v2.x;
    result.y=v1.y+v2.y;
    return result;



}

int main(){
    struct sum_of_vectors v1,v2,sum;
    printf("enter first x-axis vector number:-");
    scanf("%d",&v1.x);
    printf("enter first y - axis number:-");
    scanf("%d",&v1.y);
    printf("enter second x -axis vector number:-");
    scanf("%d",&v2.x);
    printf("enter second y- axis number:-");
    scanf("%d",&v2.y);
    sum=sumvectors(v1,v2);
    printf(" x axis  dimension sum is :- %d and y dimension sum is :- %d",sum.x,sum.y);
    return 0;



    

}