#include<stdio.h>
#define tot 5
int head=-1,n;
int stack[tot];
int clear;
void push()
    {
        if(head == tot-1)
        {
            printf(" Sorry !! The stack is full \n");
        }
        else
            {
                    printf("Enter the element to push : ");
                    scanf("%d",&n);
                    head=head+1;
                    stack[head]=n;
                    printf("The element %d is pushed !!! \n",n);
            }
    }
void pop()
    {
        if(head == -1)
        {
            printf("The stack is empty !!! \n");
        }
        else
            {

                clear=stack[head];
                head=head-1;
                printf("the element %d is deleted \n",clear);
            }
    }
void show()
    {
        if(head==-1)
        {
            printf("Stack is empty !!! \n");
        }
        else
            {
                printf("Stack elements are : ");
                for(int i = head;i >= 0;i--)
                {
                    printf("[%d]",stack[i]);
                }
                printf("\n");
            }
    }
int main()
    {
    int choose;
    while(1){
        printf("****Stack operations****\n");
        printf("1.Push \n");
        printf("2.Pop \n");
        printf("3.show \n");
        printf("\nChoose any operation to perform : ");
        scanf("%d",&choose);
        switch(choose)
        {
            case 1:
                    push();
                    break;
            case 2:
                    pop();
                    break;
            case 3:
                    show();
                    break;
            default:
                    printf("invalid");
        }
    }

    return 0;
    }
