#include<stdio.h> 
int main(int argc, char** argv)
{
	//initialisation
	int subject1,subject2,subject3;
	//entering the marks for each subjects
	printf("enter the marks of each subject");
	scanf("%d%d%d",&subject1,&subject2,&subject3);
	//printing a table in a tabular format
	printf("subject1\tsubject2\tsubjec3\n");
	//printint each marks in a tabular format
	printf("%d\t\t%d\t\t%d\t\t",subject1,subject2,subject3);
	return 0;
}