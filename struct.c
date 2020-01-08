#include<stdio.h>
#include<string.h>
typedef struct student
{
	int roll;
	char name[20];
	float mk;
}
std;
std class(std student);
int main()
{
	std s[100];
	int i,n;
	printf("Enter No Of Students\n");
	scanf("%d",&n);
	printf("Enter Details Of Student\n");
	for(i=0;i<n;i++)
{
	s[i].roll=i+1;
	printf("Give Details Of Roll No %d\n",s[i].roll);
	printf("Student Name\n");
	scanf("%s",s[i].name);
	printf("Student Marks\n");
	scanf("%f",&s[i].mk);
}
	printf("Students Table\n");
	for(i=0;i<n;i++)
{
	printf("Details Of Student Of Roll No%d\n",s[i+1].roll);
	printf("Name\n");
	puts(s[i].name);
	printf("Marks Obtained\n");
	printf("%f",s[i].mk);
}
}                                                                                                        
