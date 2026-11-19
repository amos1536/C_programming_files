#include <stdio.h>
#define max_students 20
#define max_subjects 5
char subject_grade(int mark);
int main(int argc, char** argv)
{
 int num_students, num_subjects;
    char names[20][50];
    int marks[20][5];
    
		printf("enter the number of students:");
	scanf("%d",&num_students);
	if(num_students<1||num_students>max_students)
	{
		printf("invalid number of student.Enter number between 1and20");
		return 1;
	}
	printf("enter the students subjects:");
	scanf("%d",&num_subjects);
	if(num_subjects<2||num_subjects>max_subjects)
	{
		printf("invalid number of student subject.Enter number between 2 and 5");
		return 1;
	}
	for (int i = 0; i < num_students; i++) {
        printf("\nEnter name for Student %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter marks for Student %d:\n", i + 1);
        for (int j = 0; j < num_subjects; j++) {
            printf("Enter marks for Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        
        }
    }
	 printf("\nStudent\t");
    for (int i = 1; i <= num_subjects; i++) {
        printf("Subject %d Grade\t", i);
    }
    printf("Average\tTotal\tMin\tMax\n");
    
	 for (int i = 0; i < num_students; i++) {
        int total_marks = 0, min_mark = marks[i][0], max_mark = marks[i][0];

        // Displaying student name
        printf("%s\t", names[i]);

        // Displaying grades for each subject
        for (int j = 0; j < num_subjects; j++) {
            printf("%c\t\t", subject_grade(marks[i][j]));
        }
        for (int j = 0; j < num_subjects; j++) {
            int mark = marks[i][j];
            total_marks += mark;
            if (mark < min_mark)
			 min_mark = mark;
            if (mark > max_mark)
			 max_mark = mark;
        }
 float average = (float)total_marks / num_subjects;
        printf("%.2f\t%d\t%d\t%d\n", average, total_marks, min_mark, max_mark);
    }


	return 0;
}
char subject_grade(int mark) 
{
    if (mark >= 70) {
        return 'A';
    } else if (mark >= 60) {
        return 'B';
    } else if (mark >= 50) {
        return 'C';
    } else if (mark >= 40) {
        return 'D';
    } else {
        return 'F';
    }
}