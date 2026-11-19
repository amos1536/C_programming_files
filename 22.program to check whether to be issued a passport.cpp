/*To check whether to be issued an 
passport */
#include<stdio.h>
int main(int argc, char** argv)
{
	int age;
	int nationality;
	printf("enter your age:");
	scanf("%d",&age);
	printf("\nenter your nationality:");
	scanf("%d",&nationality);
	if((age>=12)&&((nationality==254)||(nationality==255)||(nationality==256)))
	{
		printf("Issued a passport\n Thank you");
	}
	else if((age<12)&&((nationality==254)||(nationality==255)||(nationality==256)))
	{
		printf("Do not issue a passport\n Thank you");
	}
	else
	{
		printf("You are not from the above nationalities\n Thank you");
	}
	return 0;
}