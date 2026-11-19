#include<stdio.h>
float max(float num1,float num2);
int main(int argc, char** argv)
{
	float ken,peter,answer;
	printf("enter the value of ken:");
	scanf("%f",&ken);
	printf("enter the value of peter:");
	scanf("%f",&peter);
	answer=max(ken,peter);
	printf("the maximum value is %f",answer);
	return 0;
}
float max(float num1,float num2)
{
float results;
if(num1>num2)
	results=num1;
else
	results=num2;
return results;
}