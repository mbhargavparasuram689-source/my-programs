#include<stdio.h>
#include<string.h>
struct student{
	char name[10];
	int marks[3];
	int total;
	float average;
};
int main(){
	int n;
	scanf("%d",&n);
	struct student s[n];
	for(int i=0;i<n;i++){
		printf("Enter student%d name",i+1);
		scanf("%s",&s[i].name);
		printf("Enter marks of 3 subjects ");
		s[i].total=0;
		for(int j=0;j<3;j++){
			scanf("%d",&s[i].marks[j]);
			s[i].total +=s[i].marks[j];
		}
		s[i].average=s[i].total/3;
	}
	printf("student details are");
	for(int i=0;i<n;i++){
		printf("\nstudent name = %s",s[i].name);
		printf("\nstudent marks are = %d %d %d",s[i].marks[0],s[i].marks[1],s[i].marks[2]);
		printf("\nstudent total = %d",s[i].total);
		printf("\nstudent average = %.2f",s[i].average);
	}
}