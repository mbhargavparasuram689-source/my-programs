#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
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
	head3->link=head;
	
	printf("%d\n",head->data);
	printf("%d\n",head2->data);
	printf("%d",head3->data);
	return 0;
}
