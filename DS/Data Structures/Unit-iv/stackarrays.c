#include<stdio.h>
#include<stdlib.h>
#define max 5
int stack[max],top=-1;
void push()
{
	if(top==max-1)
	{
		printf("Stack is overflow");
	}
	else
	{
		int val;
		printf("Enter value ");
		scanf("%d",&val);
		top++;
		stack[top]=val;
		printf("%d is pushed",stack[top]);
	}	
}
void pop()
{
	if(top==-1)
	{
		printf("Stack is empty ");
	}
	else
	{
		printf("%d is popped ",stack[top]);
	}
	top--;
}
void peek()
{
	if(top==-1)
	{
		printf("Stack is empty ");
	}
	else{
		printf("stack is %d",stack[top]);	
	}
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("Stack is empty");
	}
	else
	{
		printf("Stack elements are :");
		for(i=top;i>=0;i--)
		{
			printf("%d ",stack[i]);
		}
	}
}
void full()
{
	if(top==max-1)
	{
		printf("Stack is full");
	}
	else
	{
		printf("Stack is empty");
	}
}
void empty()
{
	if(top==-1)
	{
		printf("Stack is empty");
	}
	else
	{
		printf("Stack is full");
	}
}
int main()
{
	int ch;
	while(1){
		printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Isfull\n6.Empty\n\nEnter your choice ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					push();
					break;
				}
			case 2:
				{
					pop();
					break;
				}
			case 3:
				{
					peek();
					break;
				}
			case 4:
				{
					display();
					break;	
				}
			case 5:
				{
					full();
					break;	
				}
			case 6:
				{
					empty();
					break;
				}
			case 7:
				{
					exit(0);
				}
		}
	}
}