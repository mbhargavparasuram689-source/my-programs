#include<stdio.h>
#define max 5
int queue[max];
int rear=-1;
int front=-1;
void enqueue()
{
	int val;
	printf("Enter value ");
	scanf("%d",&val);
	if(rear==max-1)
	{
		printf("Queue is full");
	}
	else if(rear==-1 && front==-1)
	{
		rear=front=0;
		queue[rear]=val;
		printf("%d is enqued",queue[rear]);
	}
	else
	{
		rear++;
		queue[rear]=val;
		printf("%d is enqued",queue[rear]);
	}
}
void dequeue()
{
	if(rear==-1 && front==-1)
	{
		printf("Queue id empty");
	}
	else if(front==rear)
	{
		front=rear-1;
		printf("Queue is empty");
	}
	else
	{
		printf("%d is dequed",queue[front]);
	}
}
void peek()
{
	if(rear==-1 && front==-1)
	{
		printf("Queue is empty");
	}
	else
	{
		printf("Front is %d",queue[front]);
	}
}
void dis()
{
	int i;
	if(rear==-1 && front==-1)
	{
		printf("Queue is empty");
	}
	else
	{
		for(i=front;i<rear+1;i++)
		{
			printf("\t%d\t\n",queue[i]);
		}
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Peek\nEnter your choice ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					enqueue();
					break;
				}
			case 2:
				{
					dequeue();
					break;
				}
			case 3:
				{
					dis();
					break;
				}
			case 4:
				{
					peek();
					break;
				}
		}
	}
}