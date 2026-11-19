#include<stdio.h> 
int main(int argc, char** argv)
{
	int a[2][2],b[2][2],c[2][2];
	int i,j;
	//entering the elements of the matrix 1
	printf("---------------------------\n");
	printf("matrix one\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//entering the elements of the matrix 2
	printf("---------------------------\n");
	printf("matrix two\n");
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	//sum of the two matrices
		for(i=0;i<2;i++)
	
	
		for(j=0;j<2;j++)
	
	c[i][j]= a[i][j]+b[i][j];
	
	//printing the first matrix
	printf("first matrix");
	for(i=0;i<2;i++)
	{
		printf("\n");
		for(j=0;j<2;j++)
		printf("%d\t",a[i][j]);
	}
	printf("\n\n");
	//printing the second matrix
	printf("second matrix");
	for(i=0;i<2;i++)
	{
		printf("\n");
		for(j=0;j<2;j++)
		printf("%d\t",b[i][j]);
	}
	printf("\n\n");
	//the additional matrix
	printf("matrix after the addition");
	for(i=0;i<2;i++)
	{
		printf("\n");
		for(j=0;j<2;j++)
		printf("%d\t",c[i][j]);
	}				
	return 0;
}