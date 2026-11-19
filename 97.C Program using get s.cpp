#include<stdio.h> 
int main() 
{
char name[50];
printf("Hi, what's your name? ");
gets(name);
printf("Nice to meet you %s\n",name);
return 0;
}