#include<stdio.h>
int main(int argc, char** argv)
{
	int number,solution;
	printf("enter the number between 1 to 5:");
	scanf("%d",&number);
     if(number>=1&&number<=5)
//	{
		switch(number)
		{
			case'1':
		//	{
			solution=2+5;
			printf("solution is %d",solution);
			break;
		//	}
			case '2':
		//	{
				solution=3*5;
				printf("the solution is %d",solution);
				break;
		//	}
			case '3':
		//	{
				solution=5/3;
				printf("the solution is %d",solution);
				break;
		//	}
			case'4':
		//	{
				solution=5*5;
				printf("the solution is %d",solution);
				break;
		//	}
			case'5':
			//{
				solution=2*2;
				printf("the solution is %d",solution);
				break;
		//	}
			default:
		//	{
				printf("Error!Try another number");
		//	}
		}
//	}
	return 0;
}