#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number for table : ");
	scanf("%d",&n);
	for(int i=0;i<10;i++){
		printf("%d * %d = %d\n",n,i+1,n*(i+1));
	}
}