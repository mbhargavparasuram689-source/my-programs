#include<stdio.h>
int main()
{
	char name[10];
	int rno,n;
	float per;
	char sub;
	printf("Enter student name : ");
	scanf("%s",&name);
	printf("Enter student rno : ");
	scanf("%d",&rno);
	printf("Enter 1st sem percentage : ");
	scanf("%f",&per);
	printf("Enter no.of subjects : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter subject%d name : ",i+1);
		scanf("%s",&sub);
	}
	printf("STUDENT NAME : %s\n",name);
	printf("STUDENT RNO : %d\n",rno);
	printf("STUDENT 1st SEM PERCENTAGE : %f\n",per);
	for(int i=0;i<n;i++){
		printf("SUBJECT%d IS %s\n ",i+1,sub);
	}
}