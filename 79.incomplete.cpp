#include<stdio.h>
char subject_grade(int marks);
int main(int argc, char** argv)
{
	int i,j,num_student,student_subject,marks[20][5],total_marks=0;
	float average;
	char student_name[20];
	printf("enter the number of students:");
	scanf("%d",&num_student);
	if(num_student<1||num_student>20)
	{
		printf("invalid number of student.Enter number between 1and20");
	}
	printf("enter the students subjects:");
	scanf("%d",&student_subject);
	if(student_subject<2||student_subject>5)
	{
		printf("invalid number of student subject.Enter number between 2 and 5");
	}
	for(int i=0;i<num_student;i++)
	{
		printf("enter the name of student %d:\n",i+1);
	scanf("%s",student_name[i]);
	printf("Enter marks for Student %d:\n", i + 1);
        for (int j = 0; j < student_subject; j++)
		 {
            printf("Enter marks for Subject %d:\n ", j + 1);
            scanf("%d", &marks[i][j]);
		}
    }
	return 0;
}