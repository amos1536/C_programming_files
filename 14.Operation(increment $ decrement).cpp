# include<stdio.h>
int main(int argc, char** argv)
{
	int a,b,c,d;
	int f=16,t=34,y=12,r=15;
	f++;++t;y--;--r;
	a=f+20+r;
	b=t-y+f;
	c=y+r+56;
	d=r+f+t+y;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	printf("c=%d\n",c);
	printf("d=%d\n",d);
	f++;
	printf("f=%d\n",f);
	f++;
	printf("f=%d\n",f);
	t--;y--;r--;
	printf("t=%d\n",t);
	printf("y=%d\n",y);
	printf("r=%d\n",r);
	return 0;
}