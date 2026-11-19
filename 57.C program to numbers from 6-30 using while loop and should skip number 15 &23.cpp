#include<stdio.h>
int main(int argc, char** argv)
{
	int number=6;
	while(number<=30)
	{
		if(number==15||number==23)
		{
			number++;
		continue;	
		}
		printf("%d ",number);
		number++;
	}
	return 0;
}