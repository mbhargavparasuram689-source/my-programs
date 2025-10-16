#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
void add(struct node *head,int data);
int main(){
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
	printf("%d",head3->data);
	add(head,67);
	add(head,89);
	return 0;
}
void add(struct node *head,int data){
	struct node *ptr,*temp;
	ptr=head;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->link=NULL;
	while(ptr->link!=NULL){
		ptr=ptr->link;	
	}
	ptr->link=temp;
	printf("\n%d",temp->data);
}