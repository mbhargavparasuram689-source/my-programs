#include<stdio.h>
struct student
{
	char name[5];
	int rno;
	int phno[10];
	char address[10];
};
int main()
{
	struct student s1;
	printf("Enter person name : ");
	scanf("%s",&s1.name);
	printf("Enter student rno : ");
	scanf("%d",&s1.rno);
	printf("Enter student phno : ");
	scanf("%d",&s1.phno);
	printf("Enter student address : ");
	scanf("%s",&s1.address);
	printf("Name : %s\n",s1.name);
	printf("Rno : %d\n",s1.rno);
	printf("Ph No : %d\n",s1.phno);
	printf("Address : %s",s1.address);
}