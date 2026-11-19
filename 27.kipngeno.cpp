#include<stdio.h>
#define pie 3.14
#define gravity 9.9
#define gender 'f'
int main(int argc, char** argv)
{
float radius=46.68;
float mass=79.643;
float area,weight;

area=pie*radius*radius;
weight=mass*gravity;

printf("the area of a circle is %f\n",area);
printf("the weight of the body is %f\n",weight);
	
	return 0;
}