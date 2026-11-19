/*A C program to calculate the area of the shaded part*/
#include<stdio.h>
#define pie 3.14
int main(int argc, char** argv)
{
float radius1=15;
float radius2=25;
float area;
area=(pie*radius2*radius2)-(pie*radius1*radius1);
printf("the area of the circle is %f\n",area);	
	return 0;
}