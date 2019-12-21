#include<stdio.h>
#include<conio.h>
int add(int a,int b)
{
	return a+b;
}
//int *func(int ,int); ---> declaring a function that would return int*.
//int (*func)(int,int)----> declaring a function pointer
int main()
{
    int c;
    int (*p)(int,int);
    p = add; //or p = &add //function name will return as pointer
    c = p(2,3); //or (*p)(2,3) //de-referencing and executing the function
    printf("%d",c);	
}
