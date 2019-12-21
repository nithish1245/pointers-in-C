#include<stdio.h>
int main()
{
	int i;
	int A[5] = {1,2,3,4,5};
	int *p=A;
	// A++ -----> invalid
	// p++ -----> valid;
	
	printf("%d\n",p);
	printf("%d\n",*p);
	p++;
	printf("%d\n",p);
	printf("%d\n",*p);
	for(i=0;i<5;i++)
	{
		printf("address is %d\n",&A[i]);
		printf("address is %d\n",A+i);
		printf("value is %d\n",A[i]);
		printf("value is %d\n",*(A+i));
	}
	return 0;
}
