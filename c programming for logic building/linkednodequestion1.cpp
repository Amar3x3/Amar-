#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    struct node*next;
};
void traversal(struct node*ptr){
    while(ptr!=NULL){
    cout<<"element is:-"<<ptr->data<<endl;
    ptr=ptr->next;
    }
};
int main(){
struct node*head;
struct node*second;
struct node*third;
struct node*fourth;
head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
fourth=(struct node*)malloc(sizeof(struct node));
head->data=45;
head->next=second;
second->data=56;
second->next=third;
third->data=778;
third->next=fourth;
fourth->data=89;
fourth->next=NULL;
traversal(head);
}