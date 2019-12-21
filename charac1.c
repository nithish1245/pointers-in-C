#include<stdio.h>
#include<conio.h>
void print(char c[])
{

	while(*c!='\0')
	{
		printf("%c",*c);
		c++;
	}
	printf("\n");
}
int main()
{
    char c[20] = "hello";
    print(c);	
}
