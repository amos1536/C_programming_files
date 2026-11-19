#include<stdio.h>
int main(int argc, char** argv)
{
	int a,b,c,d,e,f,g;
	int k=10,l=20,m=30,n=45;
	a=k>l;
	b=k<l;
	c=m>=30;
	d=m<=31;
	e=n==40;
	f=n==45;
	g=n=!40;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	printf("c=%d\n",c);
	printf("d=%d\n",d);
	printf("e=%d\n",e);
	printf("f=%d\n",f);
	printf("g=%d\n",g);
	
	return 0;
}