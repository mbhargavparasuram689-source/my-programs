#include<stdio.h>
union student
{
	int a;
	int b;
};
int main()
{
	union student u;
	u.a=10;
	printf("%d\n",u.a);
	u.b=20;
	printf("%d",u.a);
}