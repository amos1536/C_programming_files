/*Question 9: Write a code to assist in developing class mark sheet. The code should prompt a 
a user to enter the number of students in a class(Between 1 and 20) and the subject to be graded
(between 2 and 5) for each student it should then return :  
	1.student and her marks
	2.avarage marks,total marks,minimum marks and maximum marks for every student 
	in a tabular format
	
	
	Group Members
	1.Francis Kamau EB3/67250/23
	2.Kemboi Amos Kipngeno EB3/68883/23
	3.Elisha Kimani EB3/67316/23
	4.Kevin Njoroge EB3/67254/23
	5.Cynthia Wanjiru EB3/67238/23
	6.Teddy Ronnie EB3/67248/23
	7.Mike Ebs3/58264/22
	8.Godfrey Maina Eb3/61217/22
	9.Dawa Wangoni dawa EB3/67233/23
	10.Whitney cherotich Eb3/67285/23
	11.Dickson Esibitar EB3/67280/23
	*/


#include <stdio.h>

#define MAX_STUDENTS 20
#define MAX_SUBJECTS 5

char subject_grade(int mark);
int main() {
    int num_students, num_subjects;
    char names[MAX_STUDENTS][50];
    int marks[MAX_STUDENTS][MAX_SUBJECTS];
     
    printf("Enter the number of students in class (1-20): ");
    scanf("%d", &num_students);

    
    if (num_students < 1 || num_students > MAX_STUDENTS) {
        printf("error!. Please enter a number between 1 and 20.\n");
        return 1;
    }

    printf("Enter the number of subjects for each student (2-5): ");
    scanf("%d", &num_subjects);

    if (num_subjects < 2 || num_subjects > MAX_SUBJECTS) {
        printf("error. Please enter a number between 2 and 5.\n");
        return 1;
    }

    for (int i = 0; i < num_students; i++) {
        printf("\nEnter name for Student %d: ", i + 1);
        scanf("%s", names[i]);

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

  
        printf("%s\t", names[i]);

  
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