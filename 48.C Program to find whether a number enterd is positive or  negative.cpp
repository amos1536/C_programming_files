#include<stdio.h>
int main(int argc, char** argv)
{
	int num1,num2;
	printf("enter num1:");
	scanf("%d",&num1);
	printf("enter num2:");
	scanf("%d",&num2);
	if(num1<0 && num2<0)
	{
		printf("num1 and num2 are negative",num1,num2);
	}
	else if(num1>=0&&num2<0)
	{
		printf("num1 is a positive number while num2 is a negative number",num1,num2);
	}
	else if(num1<0&&num2>=0)
	{
		printf("num1 is a negative number while num2 is a positive number",num1,num2);
	}
	else
	{
		printf("both num1 and num2 are positive");
	}
	return 0;
}