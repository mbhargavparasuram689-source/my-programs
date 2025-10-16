#include<stdio.h>
main()
{
	int a[20],n,i,min,max;
	printf("enter size of an array :\n");
	scanf("%d",&n);
	printf("enter %d elements \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];	
		}
		if(a[i]<min)
		{
			min=a[i];	
		}		
	}
	printf("max elements %d\n",max);
	printf("min elements %d\n",min);
	return 0;	
}
