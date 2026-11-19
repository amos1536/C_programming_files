#include<stdio.h>
//#define2.6centimeters=1 inch
int main(int argc, char** argv)
{
	float number,results;
	int num1;
	printf("enter the number:");
	scanf("%f",&number);
	printf("enter num1 (1&2):");
	scanf("%d",&num1);
	switch(num1)
	{
		case 1:
		results=(number*1)/2.6;
		printf("the entered number is %finches",results);
		break;
	case 2:
	results=number*2.6;
	printf("the number entered is equal to %fcentimeters",results);
	break;
default:
    printf("invalid option");
	}
	return 0;
}