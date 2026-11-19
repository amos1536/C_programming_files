#include<stdio.h>
#define ROW 5
#define COL 4
int main(void)
{
 int i, j;
 double total;
 int marks[ROW][COL]= { {10, 23, 31, 11},{ 20, 43, 21, 21},{12,
22, 30, 13}, {30, 31, 26, 41},{13, 03, 41, 15} };
 for(i = 0; i < ROW ; i++)
 {
 total = 0.0;
 for (j=0; j<COL; j++)
 total+=marks[i][j];
 printf("Average of student %d is %f\n", i, total/4.0);
 }
}