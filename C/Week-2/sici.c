#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,si,ci;
	printf("Enter the values of p,t,r : ");
	scanf("%f %f %f",&p,&t,&r);
	si=(p*t*r)/100;
	ci=p*(pow(1+r/100,t)-1);
	printf("The values of si is %f\nThe values of ci is %f",si,ci);
}

