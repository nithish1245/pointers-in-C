#include<stdio.h>
#include<conio.h>
int main()
{
	int b[2][3] = {{2,3,6},{4,5,8}};
	int (*P)[3] = b;
	printf("%d\n%d\n",b,&b[0]);
	printf("%d\n%d\n",*b,b[0]);
	printf("%d\n%d\n",b[0][0],*(b[0]+0));
	printf("%d\n%d\n",b+1,&b[1]);
	printf("%d\n%d\n%d\n",*(b+1),b[1],&b[1][0]);
	printf("%d\n%d\n%d\n",*(b+1)+2,b[1]+2,&b[1][2]);
//	printf(*(*b+1));
	return 0;
}
