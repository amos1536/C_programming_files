#include<stdio.h>
#define pie 3.14
#define gravity 9.9
#define gender 'f'
int main(int argc, char** argv)
{
float radius=45.67;
float mass=67.94;
float area,weight;
area=pie*radius*radius;
weight=mass*gravity;
printf("the area of a circle is %f\n",area);
printf ("the weight of the body is %f\n",weight);
const float pie2=3.14;
const float gravity2=9.9;
float radius2 =45.786;
float mass2=56.734;
area=pie2*radius2*radius2;
weight=mass2*gravity2;
printf("the area of the second circle is %f\n",area);
printf("the weight of the object is %f\n",weight);
return 0;
}

