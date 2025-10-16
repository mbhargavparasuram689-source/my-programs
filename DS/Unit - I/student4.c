#include<stdio.h>
struct student
{
	int data;
	float d;
	char name[5];
};
int main()
{
	struct student s1={.data=56,.d=4.6,.name="akh"};
	printf("%d \n%f\n%s",s1.data,s1.d,s1.name);
}