#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float d,x;
	printf("enter co-efficients of a,b,c ");
	scanf("%d%d%d",&a,&b,&c);
	d=(b*b)-4*(a*c);
	if(d>=0)
	{
		x=-b-sqrt(d);
		printf("root value is %f",x);
		x=-b+sqrt(d);
		printf("root value is %f",x);
	}
	else if(d==0)
	{
		x=-b/2*a;
		printf("root value is %f",x);
	}
	else(d<0);
	{
		x=sqrt(d)/2*a;
		printf("root value is %f",x);
		x=-sqrt(d)/2*a;
		printf("root value is %f",x);	
	}
	return 0;
}
