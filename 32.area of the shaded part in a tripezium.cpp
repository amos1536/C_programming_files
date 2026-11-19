/*c program to calculate the area of the shaded part in a tripezium*/
#include<stdio.h>
int main(int argc, char** argv)
{
	float height=40;
	float a=25.0;
	float b=15.0;
	float area;
	
	area=(0.5*(a+b)*height)-(height*b);/*area of the shaded part*/
	printf("the area of the shaded part is %f\n",area);
	return 0;
}