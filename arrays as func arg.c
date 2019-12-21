#include<stdio.h>
int sum(int A[], int size)// "int* A" or "int A[]"  ...it's the same..
{
	int i,sum=0;
	printf("SOE- Size of A = %d, sizeof A[0]=%d\n",sizeof(A),sizeof(A[0]));
	for(i=0;i<size;i++)
	{
		sum+=A[i]; //A[i] is *(A+i)
		
	}
	return sum;
}
int main()
{
	int A[] = {1,2,3,4,5};
	int size = sizeof(A)/sizeof(A[0]);
	int total = sum(&A[0],size); // A can be used for &A[0]
	printf("Sum of elements = %d\n",total);
	printf("main - size of A  = %d, size of A[0] = %d\n",sizeof(A),sizeof(A[0]));
	printf("%d",sizeof(int));
}
