#include<stdio.h>
int main(int argc, char** argv)
{
	int n,i;
	int factorial=1;
	printf("enter the integer:");
	scanf("%d",&n);
	if(n<0)
	{
		printf("Eror!factorial of a negative number does not exist");
	}
	else
	{
	for(i=1;i<=n;++i)
		factorial*=i;
		{
			printf("the factorial of %d is %d",n,factorial);
		}
	}
	return 0;
}