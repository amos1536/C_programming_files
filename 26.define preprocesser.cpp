#include<stdio.h>
#include<math.h>
#define pie 3.14
#define gravity 9.9
#define gender 'F'
int main(int argc, char** argv)
{
float radius=30;
float mass=48.7;
float area,weight;
area=pie*radius*radius;
weight=mass*gravity;
printf("the area of a circle is %f\n",area,pie,radius,radius);
printf("the weight is %f",weight,mass,gravity)	;
	return 0;
}