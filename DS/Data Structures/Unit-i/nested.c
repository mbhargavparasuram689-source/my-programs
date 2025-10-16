#include<stdio.h>
struct car
{
	int carno;
	char name[5];
};
struct reg
{
	int regno;
	char typeo[5];
	struct car c1;
};
int main()
{
	struct reg r1;
	printf("Enter car no and name ");
	scanf("%d %s",&r1.c1.carno,&r1.c1.name);
	printf("Enter reg no and typeof ");
	scanf("%d %s",&r1.regno,&r1.typeo);
	printf("%d\n%s\n",r1.c1.carno,r1.c1.name);
	printf("%d\n%s",r1.regno,r1.typeo);
}