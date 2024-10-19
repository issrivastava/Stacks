#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int stack[SIZE] ;
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
void peek()
{
    if(top==-1)
      {
        printf("STACK UNDERFLOW!\n");
        printf("Stack is empty.\n");
      }
    else
    {
    printf("Last added Element in Stack is %d\n",stack[top]);
    }
}
void display()
{
      if(top==-1)
      {
        printf("STACK UNDERFLOW!\n");
        printf("Stack is empty.\n");
      }
    else
    {
        printf("Stack Elements are:\n");
        for(int i = 0; i <= SIZE-1 ; i++)
        {
            printf("%d\n",stack[i]);
        }
    }
}
int main()
{
do{
printf("\nMENU\n");
printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
printf("Enter your option:");
scanf("%d",&option);

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
    
    case 3:   
    peek();
    break;
    
    case 4:   
    display();
    break;
    
    case 5 : 
    printf("THANK YOU!");
    exit(0);
    break;
    
    default : printf("\n Wrong Selection, Please Enter your option from the menu\n ");
}
}while(option!=5);
}