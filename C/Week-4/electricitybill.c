#include<stdio.h>
int main()
{
	int eid,prev,pres,n;
	float tbill,cost=3.5;
	printf("the electricity bill id ");
	scanf("%d",&eid);
	printf("the previous month reading is ");
	scanf("%d",&prev);
	printf("the present month reading is ");
	scanf("%d",&pres);
	if(pres<prev)
	{
		printf("enter your present month reading correctly ");
		scanf("%d",&pres);
	}
	n=pres-prev;
	tbill=n*cost;
	printf("total bill amount is %.4f",tbill);
	return 0;
}
