#include<stdio.h>
main()
{
	int r,l,b,h,s;
	float a;
	printf("enter side of a square : ");
	scanf("%d",&s);
	a=s*s;
	printf("the area of a square %f",a);
	printf("\nenter length and breadth of a rectangle : ");
	scanf("%d %d",&l,&b);
	a=l*b;
	printf("the area of a recangle %f",a);
	printf("\nenter breadth and height of a triangle : ");
	scanf("%d %d",&b,&h);
	a=0.5*b*h;
	printf("the area of a triangle %f",a);
	printf("\nenter radius of a circle : ");
	scanf("%d",&r);
	a=3.14*r*r;
	printf("the area of a cirlce %f",a);
	
}
