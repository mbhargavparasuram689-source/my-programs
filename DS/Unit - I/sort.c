#include<stdio.h>
int main()
void partition(int arr[],int size,int p)
{
	int n,i, left[size], right[size];
	int leftsize=0;
	int rightside=0;
	for(i=0;i<size;i++)
	{
		if(arr[i]<p)
		{
			left[leftsize++]=arr[i];
		}
		else
		{
			right[rightsize++]=arr[i];
		}
	}
	for(i=0;i<leftsize;i++)
	{
		arr[i]=left[i];	
	}
	arr[leftsize]=p
	for(i=0;i<rightside;i++)
	{
		arr[leftsize+i+1]=right[i];
	}	
}