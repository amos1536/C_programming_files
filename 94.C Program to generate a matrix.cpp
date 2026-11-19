#include<stdio.h> 
int main(int argc, char** argv)
{
	int matrix[3][3];
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter the elements of the matrix [%d][%d]:",i,j,matrix[i][j]);
			scanf("%d",&matrix[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
			printf("%d\t",matrix[i][j]);
	}
	return 0;
}