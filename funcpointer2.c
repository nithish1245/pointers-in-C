#include<stdio.h>
#include<conio.h>
int compare(int a,int b)
{
	if(a>b)
	return -1;
	else
	return 1;
}
void bubble(int a[],int size,int (*compare)(int,int))
{
	int i,j,temp;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size-1;j++)
		{
			if(compare(a[j],a[j+1])>0)
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}

}
int main()
{
    int i,a[] = {3,2,1,5,6,4};
    bubble(a,6,compare);
    	for(i=0;i<6;i++)
    {
    	printf("%d",a[i]);
	    }	
}
