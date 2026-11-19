#include<stdio.h>
#include<math.h>
int main(int argc, char** argv)
{
	float first_unit,second_unit,third_unit,forth_unit,fifth_unit,sixth_unit;
	float total_marks,everage_mark,difference,squareroot,cube;
	//entering the score of each and every unit from first unit to sixth unit
	printf("enter the first_unit:");
	scanf("%f",&first_unit);
	printf("enter the second_unit:");
	scanf("%f",&second_unit);
	printf("enter the thid_unit:");
	scanf("%f",&third_unit);
	printf(" enter the forth_unit:");
	scanf("%f",&forth_unit);
	printf("enter the fifth_unit:");
	scanf("%f",&fifth_unit);
	printf("enter the sixth_unit:");
	scanf("%f",&sixth_unit);
	//calculating the total mark of the student
	total_marks=first_unit+second_unit+third_unit+forth_unit+fifth_unit+sixth_unit;
	//calculating the evarage mark of the student
	everage_mark=total_marks/6;
	//finding the difference between the first unit and sixth unit
	difference=first_unit-sixth_unit;
	//finding the squareroot of the sixth unit
	squareroot=sqrt(sixth_unit);
	//fiding the cube of the sixth unit
	cube=sixth_unit*sixth_unit*sixth_unit;
	printf("the total marks of student is %f",total_marks);
	printf("\nthe everage mark of the student is%f",everage_mark);
	printf("\ndiference between the first and the sixth unit is %f",difference);
	printf("\nthe squareroot of the sixth unit is %f",squareroot);
	printf("\nthe cube of the sixth unit is%f",cube);
	return 0;
}