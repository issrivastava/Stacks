#include<stdio.h>
#include<stdlib.h>

int target[] ;
int n ;
int top=-1 ;
int option , value ;
void push(int value)
{
    if (top==SIZE-1)
           {
             printf("STACK OVERFLOW!");
             printf("Stack is full.\n Insertion not Possible\n");
           } 
    else
       {
            top++ ;
            stack[top]=value ;
            printf("Data inserted successfully!!");
       }
}
void pop()
{
    if(top==-1)
      {
            printf("STACK UNDERFLOW!\n");
            printf("Stack is empty.\n Deletion not Possible\n");
      }
    else
    {
        printf("Data: %d deleted successfully!!",stack[top]);
        top-- ;
    }
}
int main()
{
    printf("\nMENU\n");
    printf("1. Push 2. Pop");
    printf("Enter your option:");
    scanf("%d",&option);
    printf("Enter the value of integer n:");
    scanf("%d",&n);
switch(option)
{
    case 1 : 
    printf("Enter the data you wish to add:\n");
    scanf("%d",&value);
    push(value);
    break;
    
    case 2:  
    pop();
    break;

 default : 
 printf("Wrong Selection, Please Enter your option from the menu");
}
}