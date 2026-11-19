#include<stdio.h> 
int main(int argc, char** argv)
{
	int username,ken,password,1234,i;
	username=ken;
	password=1234;
	printf("enter the username:");
	scanf("%d",&username);
	printf("enter your password:");
	scanf("%d",&password);
	for(int i=3;i>=username && i>=password;i--)
	{
		if(username='ken' && password='1234')
		{
			printf("login succesfully");
		}
		else
		{
			printf("incorrect username or password");
			printf("you have %d attemps",i-1);
		}
}
	return 0;
}