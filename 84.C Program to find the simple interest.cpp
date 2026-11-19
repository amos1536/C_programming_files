#include<stdio.h>
int main(int argc, char** argv)
{
	int i;
	float principal[3],rate[3],time[3];
	printf("please enter the principal,rate and time of each individual\n");
	printf("-----------------------------------------------------------\n");
	for(i=0;i<3;i++)
	{
		printf("enter the principal of idividual %d:",i+1);
		scanf("%f",&principal[i]);
		printf("enter the rate of individual %d:",i+1);
		scanf("%f",&rate[i]);
		printf("enter the time for individual %d:",i+1);
		scanf("%f",&time[i]);
	}
//	interest=(principal*rate*time)/100;
	for(i=0;i<3;i++)
	{
		float interest=(principal[i]*rate[i]*time[i])/100;
	printf("the simple interest for individual %d is %f\n",i+1,interest);
}
	return 0;
}