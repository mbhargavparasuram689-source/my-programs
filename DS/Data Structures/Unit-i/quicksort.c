#include<stdio.h>
#include<conio.h>
void quicksort(int list[],int ,int);
void main()
{
	int n,i;
	printf("enter size ");
	scanf("%d",&n);
	printf("enter %d values ",n);
	int list[n];
	for(i=0;i<n;i++){
		scanf("%d",&list[i]);
	}
	quicksort(list,0,n-1);
	printf("after sorting ");
	for(i=0;i<n;i++){
		printf("%d ",list[i]);
	}
	getch();
}
void quicksort(int list[10],int first,int last)
{
	int pivot,i,j,temp;
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
		while(i<j)
		{
			while(list[i]<=list[pivot] && i<last)
				i++;
			while(list[j]>list[pivot])
				j--;
			if(i<j)
			{
				temp=list[i];
				list[i]=list[j];
				list[j]=temp;
			}
		}
		temp=list[pivot];
		list[pivot]=list[j];
		list[j]=temp;
		quicksort(list,first,j-1);
		quicksort(list,j+1,last);
	}
}