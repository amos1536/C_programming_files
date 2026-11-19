#include<stdio.h>
int main(int argc, char** argv)
{
	int number;
	printf("enter the number:");
	scanf("%d",&number);
	while(number<=10)
	{
		printf("%d ",number);
		number++;
	}
	return 0;
}