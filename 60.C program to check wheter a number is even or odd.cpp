#include<stdio.h>
int main(int argc, char** argv)
{
	int number,remainder;
	printf("enter the number:");
	scanf("%d",&number);
	remainder=number%2;
	if(remainder==0)
	{
		printf("%d is even number",number);
	}
	else
	{
		printf("%d is an odd number",number);
	}
	return 0;
}