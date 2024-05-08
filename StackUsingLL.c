#include<stdio.h>
#include<stdlib.h>
struct Node{
    int Data;
    struct Node* next;
};
struct Node* head;
void push ()  
{  
    int val;  
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));   
    if(temp == NULL)  
    {  
        printf("Stack Overflow!!");   
    }  
    else   
    {  
        printf("Enter the value:-");  
        scanf("%d",&val);  
        if(head==NULL)  
        {         
            temp->Data = val;  
            temp -> next = NULL;  
            head=temp;  
        }   
        else   
        {  
            temp->Data = val;  
            temp->next = head;  
            head=temp;  
               
        }
    }  
}  
void pop()
{
    if(head==NULL)
    {
        printf("Stack Underflow!!");
    }
    else{
        struct Node* t=head;
        head=head->next;
        free(t);
    }
}
void display()
{
    if(head==NULL)
    {
        printf("List Empty!!");
    }
    else
    {
        struct Node* temp=head;
        while(temp->next!=NULL)
        {
            printf("%d-->",temp->Data);
            temp=temp->next;
        }
        printf("%d",temp->Data);
    }
}
int main()
{
    head=NULL;
    push();
    push();
    push();
    pop();
    display();
}
