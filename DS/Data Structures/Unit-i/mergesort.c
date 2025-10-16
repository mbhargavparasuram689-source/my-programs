#include<stdio.h>
void merge(int a[],int lb,int mid,int ub);
void mergesort(int a[],int lb,int ub)
{
	if(lb<ub){
		int mid=lb+(ub-lb)/2;
		mergesort(a,lb,mid);
		mergesort(a,mid+1,ub);
		merge(a,lb,mid,ub);
	}
}
int main()
{
	int n;
	printf("enter no of numbers ");
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);	
	}
	mergesort(a,0,n-1);	
	printf("\nAfter sorting  ");
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
}
void merge(int a[],int lb,int mid,int ub)
{
	int b[ub-lb+1];
	int i=lb;
	int j=mid+1;
	int k=0;
	while(i<=mid && j<=ub)
	{
		if(a[i]<a[j])
		{
			b[k]=a[i];
			i++;		
		}
		else
		{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	while(i<=mid)
	{
		b[k]=a[i];
		i++;
		k++;
	}
	while(j<=ub)
	{
		b[k]=a[j];
		j++;
		k++;
	}
	for(k=0;k<ub-lb+1;k++){
		a[lb+k]=b[k];
	}
}
