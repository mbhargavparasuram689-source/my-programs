#include<stdio.h>
main()
{
	float c,f;
	printf("enter the celcius and fahrenheit : ");
	scanf("%f %f",&c,&f);
	c=(f-32)*5/9; 
 	f=(c*9/5)+32;
	printf("celcius to fahrenheit is %f",c);
	printf("\nfahrenheit to celcius is %f",f);
}
