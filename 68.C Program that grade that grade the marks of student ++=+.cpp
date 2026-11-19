#include <stdio.h>

#define MAX_STUDENTS 20
#define MAX_SUBJECTS 5

char subject_grade(int mark);
int main() {
    int num_students, num_subjects;
    char names[MAX_STUDENTS][50];
    int marks[MAX_STUDENTS][MAX_SUBJECTS];
     
     
    //  entering the number of students
    printf("Enter the number of students in class (1-20): ");
    scanf("%d", &num_students);

    // checking whether the number of students is within the range given
    if (num_students < 1 || num_students > MAX_STUDENTS) {
        printf("Invalid number of students. Please enter a number between 1 and 20.\n");
        return 1;
    }

    //  entering the number of subjects
    printf("Enter the number of subjects to be graded for each student (2-5): ");
    scanf("%d", &num_subjects);

    // checking whether the number of subjects is within the range 2-5
    if (num_subjects < 2 || num_subjects > MAX_SUBJECTS) {
        printf("Invalid number of subjects. Please enter a number between 2 and 5.\n");
        return 1;
    }

    // entering the names and marks for each student and each subject
    for (int i = 0; i < num_students; i++) {
        printf("\nEnter name for Student %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter marks for Student %d:\n", i + 1);
        for (int j = 0; j < num_subjects; j++) {
            printf("Enter marks for Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        
        }
    }

    // Displaying the table in tarbular form
    printf("\nStudent\t");
    for (int i = 1; i <= num_subjects; i++) {
        printf("Subject %d Grade\t", i);
    }
    printf("Average\tTotal\tMin\tMax\n");

    // Processing marks for each student
    for (int i = 0; i < num_students; i++) {
        int total_marks = 0, min_mark = marks[i][0], max_mark = marks[i][0];

        // Displaying student name
        printf("%s\t", names[i]);

        // Displaying grades for each subject
        for (int j = 0; j < num_subjects; j++) {
            printf("%c\t\t", subject_grade(marks[i][j]));
        }

        // Inputting marks for each subject
        for (int j = 0; j < num_subjects; j++) {
            int mark = marks[i][j];
            total_marks += mark;
            if (mark < min_mark)
			 min_mark = mark;
            if (mark > max_mark)
			 max_mark = mark;
        }

        // Calculating and displaying average, total, minimum, and maximum marks
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