#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *next;
	int data;
}*head=NULL;
void create_cll()
{
	struct node *temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
		temp->next=head;
	}
	else
	{
		ptr=head;
		while(ptr->next!=head)
		{
			ptr=ptr->next;
		}
			ptr->next=temp;
			temp->next=head;
	}
}
void display()
{
	if(head==NULL)
	{
		printf("CLL is empty");
	}
	else
	{
		struct node *ptr;
		ptr=head;
		while(ptr->next!=head)
		{
			printf("%d->",ptr->data);
			ptr=ptr->next;
		}
		printf("%d->",ptr->data);
		printf("head");
	}
}
int count()
{
	int count=0;
	struct node *ptr;
	ptr=head;
	if(head==NULL)
	{
		return 0;
	}
	else
	{
	
	while(ptr->next!=head)
	{
		count++;
		ptr=ptr->next;
	}
	count++;
return count;
}
}
 void first_insert()
{
	struct node *temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the value:");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
		temp->next=head;
	}
	else
	{
		temp->next=head;
		ptr=head;
		while(ptr->next!=head)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
		head=temp;
	}
printf("Insertion succesfull!!");	
	
}
void last_insert()
{
	create_cll();
	printf("Insertion succesfull!!");
	
}
void insert_anypos()
{
	struct node *ptr,*temp;
	ptr=head;
	int c=count();
	int pos;
	printf("Enter the position");
	scanf("%d",&pos);
	if(pos<1 || pos>c+1)
	{
		printf("Invalid");
	}
	else {
	
	if(pos==1)
	{
		first_insert();
	}
	else if(pos>1&&pos<c+1)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("Enter the data :");
		scanf("%d",&temp->data);
		temp->next=NULL;
		int i;
		for(i=0;i<pos-2;i++)
		{
			ptr=ptr->next;
		}
		temp->next=ptr->next;
		ptr->next=temp;
	}
	else
	{
		last_insert();
	}
}
printf("Insertion successfull!!");
}
void delete_first()
{
	struct node *ptr,*temp;
	ptr=head;
	temp=head;
	if(head==NULL)
	{
		printf("cll is empty");
	}
	else if(count()==1)
	{
		printf("%d is deleted",temp->data);
		free(head);				
		head=NULL;
	}
	else{
		
		while(ptr->next!=head)
		{
			ptr=ptr->next;
		}
		head=temp->next;
		ptr->next=head;
		printf("%d is deleted",temp->data);
		free(temp);
		
	}
}
void last_delete()
{
	struct node *ptr,*temp;
	ptr=head;
	if(head==NULL)
	{
		printf("cll is empty!!");
	}
	else
	{
		if(count()==1)
		{
			head=NULL;
			printf("cll is empty!!");
		}
		else
		{
			while(ptr->next->next!=head)
			{
				ptr=ptr->next;
			}
			temp=ptr->next;
			ptr->next=head;
			printf("%d deleted",temp->data);
			free(temp);
		}
	}
}
void anypos_delete()
{	struct node *ptr,*temp;
	int pos,c;
	printf("Enter the position:");
	scanf("%d",&pos);
	c=count();
	if(pos<1||pos>c)
	{
		printf("Invalid!");
	}
	else
	{
		if(pos==1)
		{
			delete_first();
		}
		else if(pos>1&&pos<c)
		{
			int i;
			ptr=head;
			for(i=1;i<pos-1;i++)
			{
				ptr=ptr->next;
			}
			temp=ptr->next;
			ptr->next=temp->next;
			printf("%d is deleted",temp->data);
			free(temp);
		}
		else
		{
			last_delete();
		}
	}
}
int searching()
{
	struct node *ptr;
	int k,count=0;
	printf("Enter the element:");
	scanf("%d",&k);
	ptr=head;
	while(1)
	{
		if(ptr->data==k)
		{

			printf(" %d is found at %d node",k,count+1);
			return 0;			
		}
		ptr=ptr->next;
		count++;
		if(ptr==head)
		{
			printf("there is no elemnt");
			return 0;
		}
	}



	
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n\n0.exit\n1.create linked list\n2.display\n3.count \n4.first_insert\n5.last_insert\n6.anypos_insert\n7.delete_first\n8.last_delete\n9.anypos_delete\n10.serching\n.Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 0:
				{
					exit(0);
					break;
				}
			case 1:
				{
					create_cll();
					break;
				}
			case 2:
				{
					display();
					break;
				}
				case 3:
				{
					printf("count is %d",count());
					break;
				}
				case 4:
					{
						first_insert();
						break;
					}
				case 5:
					{
						last_insert();
						break;
					}
					case 6:
						{
						insert_anypos();
							break;
						}
					case 7:
						{
							delete_first();
							break;
						}
					case 8:
						{
						last_delete();
						break;
						}
					case 9:
						{
						anypos_delete();
						break;
						}
					case 10:
					{
						searching();
						break;
						
						}	
			default:
				{
					printf("Invalid choice:");
				}
		}		
	}
}
