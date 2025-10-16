#include<stdio.h>
struct node
{
	int a;
	int b;
	struct node* l;
};
int main()
{
	struct node ob1;
	ob1.l=NULL;
	ob1.a=10;
	ob1.b=20;
	struct node ob2;
	ob2.l=NULL;
	ob2.a=30;
	ob2.b=40;
	ob1.l=&ob2;
	printf("%d\n",ob1.l->a);
	printf("%d",ob1.l->b); 
}