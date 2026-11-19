#include<stdio.h>
int main(int argc, char** argv)
{
	float mark[5];
	int i;
	printf("enter marks for 5 units:\n");
	for(i=0;i<5;i++)
	{
		printf("enter marks for unit %d:",i+1);
	scanf("%f",&mark[i]);
}
	return 0;
}