#include<stdio.h>
int main()
{
	int a[5],ele,i;
	printf("Enter elements ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element to search ");
	scanf("%d",&ele);
	for(i=0;i<5;i++)
	{
		if(ele==a[i])
		{
			printf("Element found");
  			break;
		}
	}
		if(i==5)
			printf("Element not found");
		
	return 0;
}
