#include<stdio.h>
int main()
{
	int a =1025;
	int *p;
	p=&a;
	printf("size of integer is %d bytes\n",sizeof(int));
	printf("Address =%d, value=%d\n",p,*p);
	printf("address = %d, value = %d\n",p+1,*(p+1));
	char *p0;
	p0=(char*)p;
	printf("size of char is %d bytes\n",sizeof(char));
	printf("address  %d , value = %d\n",p0,*p0);
	printf("address = %d, value = %d\n",p0+1,*(p0+1));
	return 0;
}
