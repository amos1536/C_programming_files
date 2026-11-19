#include<stdio.h> 
int main(int argc, char** argv)
{
	int marks[3]={100,56,98};
	int i;
	for(i=0;i<3;i++)
	{
	printf("prints the marks[%d]=%d\n",i,marks[i]);
	}
	i++;
	return 0;
}