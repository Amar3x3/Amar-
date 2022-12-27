#include<stdio.h>
#include<conio.h>
 struct bank
{
    int customer_id;
    char name[45];
    int money;
    char acc_type[50];

};


int main(){
    int capacity=1,client_code=45;
    printf("enter number of customers:-");
    scanf("%d",&capacity);
    struct bank customer1[3];
    for (int i = 0; i < 3; i++)
    {
    printf("enter name for customer:-");
    gets(customer1[i]->name);
    printf("enter account type:-");
    scanf("%s\n",customer1[i].acc_type);
        
    printf("enter customer id:-");
    scanf("%d\n",&customer1[i].customer_id);
    printf("enter money :-");
    scanf("%d\n",&customer1[i].money);    
    }
    //record(customer1,capacity);
    printf("TO DISPLAY ALL CUSTOMERS INFO\nENTER CLIENT CODE:-\nELSE PRESS ANY OTHER NUMBER:-\n");
    scanf("%d",&client_code);
    if (client_code==45)
    {
        printf("CUSTOMER ID\tNAME\tACCOUNT TYPE\tMONEY DEPOSITED\n");
        for (int i = 0; i < capacity; i++)
        {
    
            
        printf("%d\t%s\t%s\t%d\n",customer1[i].customer_id,customer1[i].name,customer1[i].acc_type,customer1[i].money);
            
            
        }
        
    }else{
        printf("you have entered wrong code no customer info will be displayed");
    }
    return 0;
}