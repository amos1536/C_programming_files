#include<stdio.h>
#include<math.h>
int main(int argc, char** argv)
{
	float num1,num2;
	float square,squareroot;
	printf("enter num1:");
	scanf("%f",&num1);
	printf("enter num2:");
	scanf("%f",&num2);
squareroot=sqrt(num1);
square=num2*num2;
printf("the squareroot of num1 is%f\n",squareroot);
printf("the square of num2 is %f\n",square);
	
	return 0;
}