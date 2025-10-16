#include<stdio.h>
struct student
{
	char name[5];
	int no;
};
int main()
{
	struct student s1;
	snprintf(s1.name,sizeof(s1.name),"akhil");
	s1.no=45;
	printf("%s\n	",s1.name);
	printf("%d",s1.no);
}