#include<stdio.h>
main()
{
	int a,b,c,d,i,j;
	float r;
	printf("enter a,b,c,d values : ");
	scanf("%d %d %d %d",&a,&b,&c,&d); 
	r=(a/b)*(c-b)+(a*d)/3;
	printf("the result is %f",r); 
	printf("\nenter i value : ");
	scanf("%d",&i);
	j=(i++)+(++i);
	printf("the j value is %d",j); 

}
