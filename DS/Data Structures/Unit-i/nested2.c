#include<stdio.h>
struct student
{
	int rno;
	char name[5];
	char adrs[10];
};
struct placement
{
	char cname[5];
	int salary;
	char location;
	struct student s1;
};
int main()
{
	struct placement p1;
	printf("Enter student name and rno ");
	scanf("%s %d",&p1.s1.name,&p1.s1.rno);
	printf("Enter company name and salary and location ");
	scanf("%s %d %s",&p1.cname,&p1.salary,&p1.location);	
	printf("student dtails are ------  %s  %d",p1.s1.name,p1.s1.rno);
	printf("company details are ------ %s  %d  %s",p1.cname,p1.salary,p1.location);
}