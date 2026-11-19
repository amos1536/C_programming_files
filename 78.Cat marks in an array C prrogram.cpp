#include<stdio.h>
int main(int argc, char** argv)
{
	int i;
	float marks[10],total_marks=0,average_marks;
	printf("enter the marks for each student\n");
	printf("--------------------------------\n");
	for(i=0;i<10;i++)
	{
		printf("enter the marks of student %d:",i+1);
		scanf("%f",&marks[i]);
		total_marks+=marks[i];
	}
	printf("the total marks for students is %f\n",total_marks);
	average_marks=(total_marks/10);
	printf("the average marks is %f",average_marks);
	return 0;
}