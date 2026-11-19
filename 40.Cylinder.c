#include<stdio.h>
#include<math.h>
#define pie 3.14
int main ()
{
float volume,surface_area;
float radius,height;
printf("enter the radius of cylinder:");
scanf("%f",&radius);
printf("enter the height of cylinder:");
scanf("%f",&height);
//calculating the volume of the cylinder
volume=pie *radius*radius*height;
//calculating the surface area of the cylinder
surface_area=(pie*2*radius*radius)+(pie*2*radius*height);
printf("the volume of the cylinder is %f\n",volume);
printf("the surface area of the cylinder is %f\n",surface_area);
}
