#include<stdio.h>
int main(int argc, char** argv)
{
	int number,n;
	printf("enter the positive number:");
	scanf("%d",&number);
	 printf("the factors of %d are ",number);
	 for(n=1;n<=number;++n)
	 {
	 	if(number%n==0)
		 {
		 	printf("%d ",n);
		 }
	 }
	return 0;
}