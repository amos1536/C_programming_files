#include<stdio.h> 
//function declaration
float division(float num1,float num2);
int main(int argc, char** argv)
{
float a,b;
float answer;
printf("enter the value of a:");
scanf("%f",&a);
printf("enter the value of b:");
scanf("%f",&b);
answer=division(a,b);
printf("the division of %f and %f is %3f",a,b,answer);
	
	return 0;
}
float division(float num1,float num2)
{
float results;
results=num1/num2;
return results;	
}