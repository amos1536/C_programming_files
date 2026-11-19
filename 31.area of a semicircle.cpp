/*area of the semicircle*/
#include<stdio.h>
#include<math.h>
#define pie 3.14
int main(int argc, char** argv)
{
	float diameter1=21,diameter2=15;
	float radius1,radius2;
	float area;
	radius1=0.5*diameter1;
	radius2=0.5*diameter2;
	area=(0.5*pie*radius1*radius1)+(0.5*pie*radius2*radius2);
	printf("the area is %f\n",area);
	
	return 0;
}