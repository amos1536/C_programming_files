#include<stdio.h>
int main(int argc, char** argv)
{
	int num1,num2,num3,number;
	printf("enter the num1:");
	scanf("%d",&num1);
	printf("enter num2:");
	scanf("%d",&num2);
	printf("enter num3:");
	scanf("%d",&num3);
	printf("enter the number between 1 and 3:");
	scanf("%d",&number);
	switch(number)
	{
		case 1:
		printf("the sum of num1+num2=%d",num1,num2);
		break;
	case 2:
	printf("the multiplication of num2*num3=%d",num2,num3);
	break;
    case 3:
    	printf("the square of num3=%d",num3,num3);
    	break;
    default:
    	printf("Error!Invalid input");
	}
	return 0;
}