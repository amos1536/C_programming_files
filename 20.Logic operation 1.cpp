#include<stdio.h>
int main(int argc, char** argv)
{
	int age;
	int nationality;
	printf("enter your age and nationality:");
	scanf("%d%d\n",&age,&nationality);
if((age>=18) &&(nationality==254))
	{
	printf("issued an national identity card");
	}
	else if((age<18)&&(nationality=254))
	{
	printf("Do not issue an nationa identity card\n");	
	}
	
	return 0;
}