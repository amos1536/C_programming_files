#include<stdio.h>
float addition(float num1,float num2);
float square(float num3);
int main(int argc, char** argv)
{
float ken,peter,john,answer1,answer2;
printf("enter the value of ken:");
scanf("%f",&ken);
printf("enter the value of peter:");
scanf("%f",&peter);
printf("enter the value of john:");
scanf("%f",&john);
answer1=addition(ken,peter);
answer2=square(john);
printf("the adition of %f and%f is %f\n",ken,peter,answer1);
printf("the square of %f is %f",john,answer2);	
	return 0;
}
float addition(float num1,float num2)
{
	float results1;
	results1=num1+num2;
	return results1;
}
float square(float num3)
{
	float results2;
	results2=num3*num3;
	return results2;
}