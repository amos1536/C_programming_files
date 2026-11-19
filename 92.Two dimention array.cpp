#include<stdio.h>
int main(int argc, char** argv)
{
	int n[3][4]={{3,4,6,10},{8,9,7,23},{5,1,2,56}};
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("element n[%d][%d]=%d\n",i,j,n[i][j]);
		}
	}
	return 0;
}