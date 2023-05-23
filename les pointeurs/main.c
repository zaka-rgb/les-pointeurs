#include <stdio.h>
#include <stdlib.h>
int asd(int *y);
int main()
{
   int x=2,*p=&x;

   printf("%d",*p);
   asd( p);
   printf("%d",*p);
}
int asd(int *y)
{
    *y=*y+1;
}
