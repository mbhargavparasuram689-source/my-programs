#include<stdio.h>
struct student
{
	int m[3];
	char name[5];
	int tot;
	float avg;
};
void calculateTotalMarks(struct Student *student)
{
    student->totalMarks = 0;
    for (int i = 0; i < 5; i++)
	{
        student->totalMarks += student->marks[i];
	}
}
int main()
{
	struct student students[5];
	int i,j;
	for(i=0;i<5;i++)
	{
		printf("Enter Student %d details",i+1);
		printf("Enter student name ");
		scanf("%s",students[i].name);
		printf("enter marks for 5 subjects\n");
		for(j=0;j<5;j++)
		{
			printf("subject %d",j+1);
			scanf("%d",&students[i].marks[j]);
		}
		calculateTotalMarks(&students[i]);
	}
}