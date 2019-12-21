#include <stdio.h>

int main()
{
   int a,b=10;
   int *p;
   a=12;
   *p=&a;
   *(p+1)=3;
   printf("%d\n",(p+1));
   printf("%d\n",*(p+1));
   printf("%d\n",&a);
   printf("%d\n",*p);
    printf("%d\n",p);
   printf("%d\n",&p);
   printf("after\n");
   p=&b;
   printf("%d\n",p);
    return 0;
}


