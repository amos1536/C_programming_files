#include<stdio.h>
#include<math.h>
#define pie 3.14
#define gravity 9.8
int main(int argc, char** argv)
{
	float length,width,height1,height2,radius,mass1,mass2,weight,weight2;
	float surface_area1,surface_area2,volume1,volume2,curved_surface_area,painting_cost;
	int a,b;
	printf("enter the length:");
	scanf("%f",&length);
	printf("enter the width:");
	scanf("%f",&width);
	printf("enter the height of the cylinder height1:");
	scanf("%f",&height1);
	printf("enter the height of the cuboid height2:");
	scanf("%f",&height2);
	printf("enter the radius of the cylinder:");
	scanf("%f",&radius);
	printf("enter the mass of the cylinder mass1:");
	scanf("%f",&mass1);
	printf("enter the mass of the cuboid mass2:");
	scanf("%f",&mass2);
	//calculating the surface area of a cylinder surface area 1
	surface_area1=(2*pie*radius*radius)+(2*pie*radius*height1);
	//calculating the volume of the cylinder volume1
	volume1=pie*radius*radius*height1;
	//finding the curved surface area of the cylinder
	curved_surface_area=pie*2*radius*height1;
	//finding the cost of painting the curved surface area of the cylinder if 1square centimetre=ksh2.05
	painting_cost=(curved_surface_area/1)*2.05;
	//finding the surface area of the cuboid surface area2
	surface_area2=(length*width*2)+(length*height2*2)+(width*height2*2);
	//calculating the volume of the cuboid volume2
	volume2=length*width*height2;
	//finding the weight of the cylinder and that of the cuboid
	weight=gravity*mass1;
	weight2=gravity*mass2;
	printf("the surface area of the cylinder(surface area 1) is %f\n",surface_area1);
	printf("the volume of the cylinder(volume1) is %f\n",volume1);
	printf("the curved surface area of the cylinder is %f\n",curved_surface_area);
	printf("the cost of painting the curved surface area is %f\n",painting_cost);
	printf("the surface area of the cuboid(surface area2) is %f\n",surface_area2);
	printf("the volume of the cuboid(volume2) is %f\n",volume2);
	printf("the weight of the cylinder weight is%f\n",weight);
	printf("the weight of the cuboid weight2 is%f\n",weight2);
	//checking whether volume1 is greater or less than volume2
	a=volume1<volume2;
	if(a==1)
	{
		printf("volume1 is less than volume2\n");
	}
	else if(a==0)
	{
		printf("volume1 is greater than volume2\n");
	}
	//checking whether surface area 1 is greater or less than surface area 2
	 b=surface_area1>surface_area2;
	 if(b==1)
	 {
	 	printf("surface area1 is greater than surface area2\n");
	 }
	else if(b==0)
	{
		printf("surface area1 is less than surface area2\n");
	}
	return 0;
}