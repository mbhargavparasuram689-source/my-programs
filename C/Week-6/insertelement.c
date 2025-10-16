#include<stdio.h> 
int main() 
{ 
	int a[100]; 
	int i, n, x, pos; 
	printf("Enter no of elements \n"); 
	scanf("%d", &n); 
	printf("Enter the elements \n"); 
	for (i = 0; i < n; i++) 
	{ 
		scanf("%d", &a[i]); 
	} 
	printf("\nEnter the new element: "); 
	scanf("%d", &x); 
	printf("Enter the position : "); 
	scanf("%d", &pos); 
	for(i = n-1; i >= pos; i--) 
	a[i]=a[i-1]; 
	a[pos-1]=x; 
	for (i = 0; i < n; i++) 
	{ 
		printf("%d ", a[i]); 
	} 
} 
