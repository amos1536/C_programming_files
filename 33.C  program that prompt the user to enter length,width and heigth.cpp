#include<stdio.h>
int main(int argc, char** argv)
{
	float lenght,width,height;
	float volume,surface_area,filling_cost,painting_cost;
	printf("enter the lenght:");
	scanf("%f",&lenght);
	printf("\nenter the width:");
	scanf("%f",&width);
	printf("\nenter the height:");
	scanf("%f",&height);
	//calculating the volume
	volume=lenght*width*height;
	//calculating the surface area
	surface_area=(lenght*width*2)+(lenght*height*2)+(width*height*2);
	//calculating the cost of filling with oil
	filling_cost=(volume/1000)*190;
	//caculating the cost of painting with oil
	painting_cost=1.05*volume;
	printf("the volume of the cuboid is %f\n",volume);
	printf("the surface_area of the cuboid is %f\n",surface_area);
	printf("the cost of filling it with oil is ksh%f\n",filling_cost);
	printf("the cost of painting with oil is ksh%f\n",painting_cost );

	return 0;
}