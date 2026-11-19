//program to swap two numbers
#include<stdio.h>
int main(int argc, char** argv)
{
	int num1,num2;
	printf("enter num1:");
	scanf("%d",&num1);
	printf("enter num2:");
	scanf("%d",&num2);
	int swap=num1;
	num1=num2;
	num2=swap;
	printf("num1 after swapping is %d\n",num1);
	printf("num2 after swapping is %d\n",num2);
	return 0;
}