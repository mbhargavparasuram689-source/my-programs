#include<stdio.h>
main()
{
	int m1,m2,m3,m4,m5,tot;
	float avg;
	printf("enter m1, m2, m3, m4, m5 marks : ");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	tot=m1+m2+m3+m4+m5;
	printf("total marks are %d",tot);
	avg=tot/5;
	printf("\naverage marks are %f",avg);
	if(avg>=90)
	{
		printf("Grade A");
	}
	else if(avg>=80)
	{
		printf("Grade B");
	}
	else if(avg>=70)
	{
		printf("Grade C");
	}
	else if(avg>=60)
	{
		printf("Grade D");
	}
	else if(avg>=40)
	{
		printf("Grade E");
	}
	else 
	printf("Grade F");
}
