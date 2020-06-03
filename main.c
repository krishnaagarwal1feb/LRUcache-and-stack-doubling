#include<stdio.h>
#include<stdlib.h>

int *stack;
int top=-1, cap=1,status=0;


void stackfull();
void push(int);
void display();
void pop();

void stackfull()
{
	cap=cap*2;
	stack = (void*)realloc( stack,cap*sizeof(int));
}

void push(int item)
{
        if ( top >= cap-1 )
	{
		cout<<"stack doubling";
		stackfull();
	}
       	++top;
	stack[top] =item ;
        status++;
}

//POP function

void pop()
{
        int r;
        if(top==-1)
                printf("\n\nstack is underflow");
        else
        {
                r = stack[top--];
                status--;
                printf("\nPopped element is %d", r);
        }
    //    return r;
}

void display()
{
        int i;
        if(top==-1)
                printf("\nstack is empty");
        else
        {
                for(i=top;i>=0;i--)
                        printf("\n%d",stack[i]);
                printf("\n");
        }
}


int main()
{
	int ch,item;
    stack=(int*)malloc(sizeof(int));

       do
        {
                printf("\nMENU\n");
                printf("1. push element in stack\n");
                printf("2. pop an element from the stack\n");
                printf("3. display the stack\n");
                printf("4. exit\n");
                printf("Enter the choice \n");
                scanf("%d",&ch);
                switch(ch)
                {
                        case 1:
                                //push
                                printf("enter element to be pushed to stack ");
                                scanf("%d",&item);                                      //one element at a time is pushed in the stack
                                push(item);
                                display();
                                break;
                        case 2:
                                //pop element from top
                                pop();
                                display();
                                break;
	                case 3:
                                display();
                                break;
                        case 4:
                                //exit
                                exit(0);
                                break;
                        default:
                                printf("End of execution ,press 4 to exit ");
                                break;
                }       //end of switch
        }while(ch!=4);
return 0;
}
