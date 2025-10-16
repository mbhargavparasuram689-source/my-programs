#include<stdio.h>
struct student
{
	char name[5];
	int rno;
	char address[5];
};
struct placement
{
	char name[5];
	int salary;
	char location[5];
	struct student s[3];
};
int mian()
{
	struct placement p1;
	int i;
	for(i=0;i<3;i++)
	{
		printf("Enter name ");
		scanf("%s",&p1.s[i].name);
		printf("Enter rno ");
		scanf("%d",&p1.s[i].rno);
		printf("Enter address ");
		scanf("%s",&p1.s[i].address);
		printf("Enter company name ");
		scanf("%s",&p1.name);
		printf("Enter salary ");
		scanf("%d",&p1.salary);
		printf("Enter location ");
		scanf("%s",&p1.location);
		
	}
	for(i=0;i<3;i++)
	{
		printf("Student name was %s",p1.s[i].name);
		printf("Student roll no is %d",p1.s[i].rno);
		printf("Student address was %s",p1.s[i].address);
		printf("Company name was %s",p1.name);
		printf("Employeee salary was %d",p1.salary);
		printf("Company location was %s",p1.location);
	}
	return 0;
}