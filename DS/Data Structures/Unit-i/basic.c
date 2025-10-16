#include<stdio.h>
#include<string.h>
struct person
{
	char name[10];
	int age;
	float height;	
};
int main()
{
	struct person person1;
	strcpy(person1.name,"Evil");
	person1.age=24;
	person1.height=5.8;
	printf("Name= %s\n",person1.name);
	printf("Age= %d\n",person1.age);
	printf("Height= %.1f",person1.height);
	return 0;
}
