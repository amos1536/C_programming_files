#include<stdio.h> 
// function declaration
int max(int num1,int num2);
int main(int argc, char** argv)
{
	int a,b,answer;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	answer= max( a, b);
	printf("the max value is %d\n",answer);
	
	return 0;
}
int max(int num1, int num2)
{
	int results;
	if(num1<num2)
		results=num2;
	
	else
	
		results=num1;
	
	return results;
}