#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
insertathead();
atend();
delatbeg();
delatend();
insertatpos();
void main()
{
	int ch=0;
	while(ch !=9)
	{
		printf("\n1.Insert at head\n2.Insert at end\n3.Delete at beginning\n4.Delete at end\n5.Insert at pos");
		printf("\nEnter your chioce");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					insertathead();
					break;
				}
		}
struct node *head,*tail;
struct node *create(int val){
		struct node *nn=malloc(sizeof(struct node));
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
void deltatpos(){
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
	temp->next=temp->next->next;
}
int main()
{
	int n;
	scanf("%d",&n);
	int val,i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&val);
		Insert(val);
	}
}
