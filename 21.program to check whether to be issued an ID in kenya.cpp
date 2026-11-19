
/*To check whether to be issued an 
ID in kenya*/
#include<stdio.h>
int main(int argc, char** argv)
{
	int age;
	int nationality;
	printf("enter your age:");
	scanf("%d",&age);
	printf("\nenter your nationality:");
	scanf("%d",&nationality);
	if((age>=18)&&(nationality==254))
	{
		printf("Issued a national identity card");
	}
	else if((age<18)&&(nationality==254))
	{
		printf("Do not issue a national identity card");
	}
	return 0;
}