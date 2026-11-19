#include<stdio.h>
int main(int argc, char** argv)
{
	int LENGTH=10;
	int WIDTH=5;
    char NEWLINE='\n';
	int area;
	area = LENGTH * WIDTH;
	printf("the value of area:%d",area);
	printf("%c",NEWLINE);
	return 0;
}