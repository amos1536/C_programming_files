#include<stdio.h> 
#include<string.h>
int main(int argc, char** argv)
{
	char username[12];
	char password[12];
	int attempts=3;
	while(attempts>0)
	{
	printf("enter your username:");
	scanf("%s",username);
	printf("enter your password:");
	scanf("%s",password);
	if(strcmp(username, "ken")==0 && strcmp(password, "1234")==0)
	{
		printf("login succesfully\n");
		break;
	}
	else
	{
		printf("incorrect username or password.please try again you have %d attemps left\n",attempts-1);
		attempts--;
	}
	}
	if(attempts==0)
	{
		printf("you have exceeded the maximum  number of attempts.Login failed\n");
	}
	return 0;
}