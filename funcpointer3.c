#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int compare(const void* a, const void* b)
{
	int A = *((int*)a);
	int B = *((int*)b);
	return B-A;
}
int main()
{
	int i,a[] = {-31,22,-1,50,-6,4,6};
	qsort(a,7,sizeof(int),compare);
	for(i=0;i<7;i++){
		printf("%d ",a[i]);
	}
}
