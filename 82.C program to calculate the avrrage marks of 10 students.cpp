#include<stdio.h>
int main(int argc, char** argv)
{
	int i;
	float cat_marks[10],total_marks=0,average_marks;
	printf("please enter the cat marks of each student\n");
	for(i=0;i<10;i++)
	{
		printf("enter the marks of student %d:",i+1);
	//	i+1;
		scanf("%f",&cat_marks[i]);
		total_marks+=cat_marks[i];
	}
	average_marks=total_marks/10;
	{
		printf("the average marks is %f",average_marks);
	}
	return 0;
}