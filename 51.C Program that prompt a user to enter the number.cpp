#include<stdio.h>
int main(int argc, char** argv)
{
	int number;
	printf("enter the number:");
	scanf("%d",&number);
	if(number>10)
	{
		printf("the number entered is greater than 10");
	}
	else if(number==10)
	{
		printf("the number entered is equal to 10");
	}
	else
	{
		printf("the number entered is less than 10");
	}
	return 0;
}