#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
void count(struct node *head);
void print(struct node *head);
int main()
{
	
	struct node *head=malloc(sizeof(struct node));
	head->data=45;
	head->link = NULL;
	
	struct node *head2=malloc(sizeof(struct node));
	head2->data=98;
	head2->link = NULL;
	head->link=head2;
	
	struct node *head3=malloc(sizeof(struct node));
	head3->data=74;
	head3->link = NULL;
	head->link->link=head3;
	printf("%d\n",head->data);
	printf("%d\n",head2->data);
	printf("%d\n",head3->data);
	count(head);
	print(head);
	return 0;
}
void count(struct node *head)
{
	struct node *ptr=head;
	int cnt=0;
	while(ptr!=NULL){
		cnt++;
		ptr=ptr->link;
	}
	printf("%d\n",cnt);}
void print(struct node *head){
	struct node *ptr=head;
	while(ptr!= NULL){
		printf("%d\n",ptr->data);
		ptr=ptr->link;
	}
}	
