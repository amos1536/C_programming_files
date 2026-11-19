#include<stdio.h>
int main(int argc, char** argv)
{
	int number,i;
	printf("enter the positive number:");
	scanf("%d",&number);
	printf("the factors of %d are:",number);
	for(i=1;i<=number;++i)
	{
		if(number%i==0)
		{
			printf("%d ",i);
	}
	}
	
	return 0;
}