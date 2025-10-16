#include<stdio.h>
struct person
{
	char name[5];
	int id;
};
int main()
{
	struct person p1;
	printf("Enter Person name ");
	scanf("%s",&p1.name);
	printf("Enter Person id ");
	scanf("%d",&p1.id);
	printf("person name %s\n",p1.name);
	printf("Person id is %d",p1.id);
	return 0;
}