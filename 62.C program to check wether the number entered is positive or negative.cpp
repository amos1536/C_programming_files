#include<stdio.h>
int main(int argc, char** argv)
{
	float number,square;
	printf("enter the number:");
	scanf("%f",&number);
	square=number*number;
	if(number<0)
	{
		printf("the %f is negative number\n",number);
		printf("the square of %f is %f",number,square);
	}
	else
	{
		printf("the %f is a positive number\n",number);
		printf("the square of %f is %f",number,square);
	}
	return 0;
}