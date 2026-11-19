#include<stdio.h>
int main(int argc, char** argv)
{
	int m,n,r;
	printf("enter the value of m:");
	scanf("%d",&m);
	printf("enter the value of n:");
	scanf("%d",&n);
	while (n!=0)
	{
		r=m%n;
		m=n;
		n=r;
	}
	printf("the hcf is%d\n",m);
	return 0;
}