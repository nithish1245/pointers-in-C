#include<stdio.h>
void print(int *p)
{
	*p=*p+1;
	
}
int main()
{
       int a;
	  a=10;
	  print(&a);
	  printf("a=%d",a);
	  return 0;
}
