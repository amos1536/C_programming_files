#include<stdio.h>
int main(int argc, char** argv)
{
	int number;
	printf("enter the number:");
	scanf("%d",&number);
	if(number>=0&&number<=39)
	{
		printf("F fail");
	}
	else if(number>=40&&number<=49)
	{
		printf("D pass");
	}
	else if(number>=50&&number<=59)
	{
		printf("C second class lower");
	}
	else if(number>=61&&number<=69)
	{
		printf("B second class upper");
	}
	else
	{
		printf("A first class");
	}
	return 0;
}