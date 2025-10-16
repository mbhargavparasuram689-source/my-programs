#include<stdio.h>
#include<stdlib.h>
#define max 5
int size=0;
struct node
{
	int data;
	struct node *next;
}*top=NULL;
void push()
{
	if(max==size)
	{
		printf("stack is full");
	}
	else
	{
		struct node *temp=malloc(sizeof(struct node));
		printf("Enter data:");
		scanf("%d",&temp->data);
		temp->next=top;
		top=temp;
		size++;
	}	
}
void pop()
{
	struct node *temp;
	temp=top;
	if(top==NULL && size==0)
	{
		printf("stack is empty underflow");
	}
	else
	{
		printf("%d is poped",temp->data);
		top=temp->next;
		//top=temp;
		size--;
	}
}
void peek()
{
	struct node *temp;
	if(top==NULL&& size==0)
	{
		printf("stack is empty underflow");
	}
	else
	{
		printf("\nTop is:%d",top->data);
	}
}
void display()
{
	struct node *ptr;
	ptr=top;
	if(top==NULL && size==0)
	{
		printf("stack is empty underflow");
	}
	else
	{
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->data);
			ptr=ptr->next;
		}
	}
}
void isfull()
{
	if(max==size)
	{
		printf("Stack is full");	
	}
	else
	{
		printf("Stack is not full");
	}
}
void isempty()
{
	if(top==NULL && size==0)
	{
		printf("\nStack is empty");
	}
	else
	{
		printf("\nStack is not empty");
	}
	
}


int main()
{
	int ch;
	while(1)
	{
		printf("\n 1.push\n 2.pop\n 3.peek\n 4.display\n 5.isfull\n 6.isempty\n Enter ur choice:");
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
					isfull();
					break;
				}
				case 6:
				{
					isempty();
					break;
				}
					
		}
	}	
}
