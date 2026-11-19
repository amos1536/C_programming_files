#include<stdio.h>
int main(int argc, char** argv)
{
	int number;
	printf("enter the number:");
	scanf("%d",&number);
	if(number<10)
	{
		printf("the number entered is less tha 10");
	}
	else
	{
		printf("the number entered is greater than 10");
	}
	return 0;
}