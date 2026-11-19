#include<stdio.h>
int main(int argc, char** argv)
{
	int a;
	printf("enter the value of a:");
	scanf("%d",&a);
	do
	{
		printf("%d ",a);
		a++;
	}
	while(a<=10);
	return 0;
}