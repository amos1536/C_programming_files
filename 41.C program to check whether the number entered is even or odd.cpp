#include<stdio.h>
int main(int argc, char** argv)
{
	int number;
	printf("enter the number:");
	scanf("%d",&number);
	if(number%2==0)
	{
		printf("the number entered is even");
}
	else
	{
		printf("the number entered is odd");
}
	return 0;
}