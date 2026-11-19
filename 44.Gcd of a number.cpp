#include<stdio.h>
#include<math.h>
int main(int argc, char** argv)
{
int num1,num2,i,gcd;
printf("enter the value of num1:");
scanf("%d",&num1);
printf("enter the value of num2:");
scanf("%d",&num2);
for(i=1;i<=num1&&i<=num2;++i)
	if(num1%i==0&&num2%i==0)
		gcd=i;
		{
			printf("the gcd of %d and %d is %d",num1,num2,gcd);
		}	
	return 0;
}