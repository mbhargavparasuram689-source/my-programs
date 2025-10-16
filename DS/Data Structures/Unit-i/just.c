#include<stdio.h>
struct student{
	char name[10];
	int age;
	int rno;
};
int main(){
	struct student s1={"Akhil",18,281};
	struct student s2={"Akil",19,281};
	printf("Student 1 details are %s\t%d\t%d\t\n",s1.name,s1.age,s1.rno);
	printf("Student 2 details are %s\t%d\t%d\t\n",s2.name,s2.age,s2.rno);
	struct student s3=s1;
	printf("Student 3 details are %s\t%d\t%d\t\n",s3.name,s3.age,s3	.rno);
}