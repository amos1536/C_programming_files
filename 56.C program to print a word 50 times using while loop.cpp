#include<stdio.h>
int main(int argc, char** argv)
{
	int a;
	printf("enter the value of a and should not be >=50:");
	scanf("%d",&a);
	while(a<=50)
	{
		printf("I like you\n");
		printf("You are my friend\n");
		++a;
	}
	
	return 0;
}