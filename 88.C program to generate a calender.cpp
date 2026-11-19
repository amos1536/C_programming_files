#include<stdio.h>
int main(int argc, char** argv)
{
	int start_day=2,week_days=0,day=1,end_day=31;
	//print the header
	printf("   March  2022\n");
	printf(" Su Mo Tu We Th Fr Sa\n");
	for(week_days=0;week_days<start_day;week_days++)
	{
		printf("   ");
	}
for(day=1;day<=end_day;day++)
{
	printf("%3d", day);
	if((start_day+day)%7==0)
	{
		printf("\n");
	}
}
printf(" \n");	
	return 0;
}