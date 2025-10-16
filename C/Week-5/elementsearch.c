#include<stdio.h>
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10},i,key;
	printf("enter an element ");
	scanf("%d",&key);
	for(i=0;i<10;i++)
	if(key==a[i])
	{
		printf("element found");
	}
	else
	{
		printf("element not found");
	}
	return 0;
	
}
