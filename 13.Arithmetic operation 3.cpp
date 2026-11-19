#include<stdio.h>
int main(int argc, char** argv)
{
	int A,B,C,D,E;
	int F=10,G=15,H=30;
	A=F+30;
	B=G+40;
	C=H+F+G;
	printf("%d\n",A);
	printf("%d\n",B);
	printf("%d\n",C);
	F++;G--;H++;
	A=F+30;
	B=G+40;
	C=++F+G;
	D=3*H;
	E=C+45;
	printf("%d\n",A);
	printf("%d\n",B);
	printf("%d\n",C);
	printf("%d\n",D);
	printf("%d\n",E);
	F--;F--;--G;++H;
	printf("%d\n",F);
	F--;
	printf("%d\n",F);
	printf("%d\n",G);
	printf("%d\n",H);

	
	return 0;
}