#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
void count(struct node *head);
void print(struct node *head);	
int main(){
	struct node *head=malloc(sizeof(struct node));
	head->data=100;
	head->link=NULL;
	
	struct node *head1=malloc(sizeof(struct node));
	head1->data=200;
	head1->link=NULL;
	head->link=head1;
	
	struct node *head2=malloc(sizeof(struct node));
	head2->data=300;
	head2->link=NULL;
	head->link->link=head2;
	
	printf("%d\n",head->data);
	printf("%d\n",head1->data);
	printf("%d\n",head2->data);
	count(head);
	print(head);
	return 0;
}
void count(struct node *head){
	struct node *ptr=head;
	int cnt=0;
	while(ptr!=NULL){
		cnt++;
		ptr=ptr->link;
	}
	printf("No of heads are %d\n",cnt);
}
void print(struct node *head){
	struct node *ptr=head;
	while(ptr!=NULL){
		printf("The data is %d\n",ptr->data);
		ptr=ptr->link;
	}
}