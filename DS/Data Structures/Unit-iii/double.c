#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *head,*tail;
struct node *create(int val){
		struct node *nn=malloc(sizeof(struct node));
		nn->prev=NULL;
		nn->data=val;
		nn->next = NULL;
		return nn; 
}
void Insert(int val){
	struct node *temp=create(val);
	if(head==NULL){
		head=tail=temp;
	}
	else{
		tail->next=temp;
		tail=tail->next;
	}
}
void insertathead(){
	int val;
	scanf("%d",&val);
	struct node *nn=create(val);
	nn->next=head;
	head->prev=nn;
	head=nn;
}
void atend(){
	int val;
	scanf("%d",&val);
	struct node *nn=create(val);
	struct node *temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=nn;
	tail=nn;
	nn->prev=temp;
}
void delatbeg(){
	head=head->next;
}
void delatend(){
	struct node *temp;
	temp=head;
	while(temp->next->next!=NULL){
		temp=temp->next;
	}
	temp->next=NULL;
}
void dis(){
	struct node *temp=head;
	while(temp!=NULL){
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("NULL");
}
void insertatpos(){
	int val;
	printf("Enter pos to insert ");
	scanf("%d",&val);
	struct node *nn=create(val);
	int pos;
	scanf("%d",&pos);
	struct node *temp;
	temp=head;
	int j=1;
	temp=head;
	while(j<pos-1){
		temp=temp->next;
		j++;
	}
	nn->next=temp->next;
	temp->next=nn;
}
void delatpos(){
	int pos;
	printf("Enter pos to delete ");
	scanf("%d",&pos);
	struct node *temp;
	temp=head;
	int j=1;
	temp=head;
	while(j<pos-1){
		temp=temp->next;
		j++;
	}
	temp->next=temp->next->next;
}
int main(){
	int n;
	printf("Enter no of elements ");
	scanf("%d",&n);
	int val,i;
	for(i=0;i<n;i++){
		scanf("%d",&val);
		Insert(val);
	}
dis();
insertathead();
printf("after inserting at head ");
dis();
atend();
printf("\nAfter inserting at end ");
dis();
delatbeg();
printf("\nAfter deleting at beg ");
dis();
delatend();
printf("\nafter deleting at end ");
dis();
insertatpos();
printf("\nafter inserting at pos ");
dis();
delatpos();
printf("\nafter deleting at pos ");
dis();
}
