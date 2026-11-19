#include<stdio.h>
int main(int argc, char** argv)
{
	int A,B;
	int remainder,quotient;
	printf("enter the vlue of A:");
	scanf("%d",&A);
	printf("enter the value of B:");
	scanf("%d",&B);
	if(A<B)
	{
		printf("invalid the value of A should be greater than B");
	}
	else
	{
		remainder=A%B;
		quotient=A/B;
		printf("the divission of %d and %d is %d remainder %d",A,B,quotient,remainder);
	}
	return 0;
}