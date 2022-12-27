#include <stdio.h>
#include <conio.h>
int main(){
    int maths,
    physics,
    chemistry;
    printf("enter maths marks:-\n");
    scanf("%d",&maths);
    printf("enter physics marks:-\n");
    scanf("%d",&physics);
    printf("enter chemistry marks:-");
    scanf("%d",&chemistry);
    float all_percentage=(maths+physics+chemistry)/3;
    if (all_percentage>40 && maths>33 && chemistry>33 && physics>33)
    {
        printf("you have passed and your percentage is :-%f",all_percentage);
    }else{
        printf("you have failed and your percentage is :-%f",all_percentage);
    }
    

    return 0;
}