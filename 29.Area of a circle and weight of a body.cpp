#include<stdio.h>
#define pie 3.14
#define gravity 9.9
#define gender 'f'
int main(int argc, char** argv)
{
float radius;
float mass;
float area,weight;
printf("\nenter the radius:");
scanf("%f",&radius);
printf("enter the mass of the body:");
scanf("%f",&mass);
area=pie*radius*radius;
weight=mass*gravity;
printf("the area of a circle is %f\n",area);
printf("the weight of the body is %f\n",weight);
return 0;
}
