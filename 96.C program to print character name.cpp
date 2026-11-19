#include<stdio.h> 
int main(int argc, char** argv)
{
	char name[100];
	printf("enter your name:");
	scanf("%99s",name);
	printf("my name is %s",name);
	
	return 0;
}