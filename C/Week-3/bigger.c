#include<stdio.h>
main()
{
 	int a,b,c;
	printf("enter a,b,c values : ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b & a>c)
	{
		printf("a is bigger");
	}
	else if(b>c)
	{
		printf("b is bigger");
	}
	else
	{
		printf("c is max");
	}
	return 0;
}
