#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	printf("enter the array size\n");
	scanf("%d",&n);
	int *a = (int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		a[i] = i+1;
	}
	int *b = (int*)realloc(a,2*n*sizeof(int));
	printf("prev block address = %d, new address=%d\n",a,b);
	for(i=0;i<2*n;i++)
	{
		printf("%d\n",b[i]);
	}
}
