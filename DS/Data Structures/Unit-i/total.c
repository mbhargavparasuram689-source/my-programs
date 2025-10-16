#include<stdio.h>
#include<string.h>
struct student{
	int m1,m2,m3,total;
	char name[10];
};
int main(){
	struct student s1;
	strcpy(s1.name,"Akhil");
	s1.m1=89;
	s1.m2=67;
	s1.m3=73;
	s1.total=s1.m1+s1.m2+s1.m3;
	printf("%s\tm1=%d\tm2=%d\tm3=%d\ttotal=%d",s1.name,s1.m1,s1.m2,s1.m3,s1.total);
}