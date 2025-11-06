#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;


void push(int value)
{
if(top==MAX-1)
{
printf("Stack overflow! Cannot push %d\n",value);
}
else{
stack[++top]=value;
printf("%dpushed to stack\n",value);
}
}
void pop()
{
if(top==-1)
{
printf("Stack underflow! Cannot pop\n");
}else
{
printf("%d popped from stack\n",stack[top--]);
}
}
void display()
{
if (top==-1){
printf("stack is empty\n");
}else
{
printf("stack elements:");
for(int i=top;i>=0;i--)
{
printf("%d",stack[i]);
}
printf("\n");
}
}
 int main()
 {
 int choice,value;
 while(1){
 printf("\n---Stack menu---\n");
 printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
 printf("enter your choice::");
 scanf("%d",&choice);
 
 switch(choice)
 {
 case 1:
 printf("Enter value to push; ");
 scanf("%d",&value);
 push(value);
 break;
 
 case 2:
 pop();
 break;
 case 3:
 display();
 break;
 case 4:
 
 
 return 0;
 default:
 printf("invalid choice!Try Again.\n");
 }
 }
 }
 

