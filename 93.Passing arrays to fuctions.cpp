#include<stdio.h> 
int addition(int array[],int size);
int main(int argc, char** argv)
{
int marks[3];
int i;
int sum;
for(i=0;i<3;i++)
{
	printf("enter the mark %d:",i);
scanf("%d",&marks[i]);
}
sum=addition(marks,3);
printf("the sum of the marks is %d",sum);	
	return 0;
}
int addition(int array[],int size)
{
	int sum;
	int j;
	for(j=0;j<size;j++)
	{
		sum+=array[j];
	}
	return sum;
}