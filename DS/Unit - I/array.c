#include<stdio.h>
#include<string.h>
struct student
{
	char name[5];
	int rno;
	char course[5];
	int sec;
};
int manin()
{
	struct student s[3]={
		{"Hem",241,"CSE",5},
		{"Hasin",060,"CSE",5},
		{"Jooy",023,"CIVIL",1},
	};
	int i;
	for(i=0;i<3;i++)
	{
		printf("Student %d",i+1);
		printf("Name : %s\nRno : %d\nCourse : %s\nSec : %d\n\n",s[i].name,s[i].rno,s[i].course,s[i].sec);	
	}
	return 0;	
}