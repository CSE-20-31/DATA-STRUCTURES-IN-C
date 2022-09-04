#include<stdio.h>

int fact(int n)
{
    int temp;

   if(n==0)
   return 1;

   else
      temp = n*fact(n-1);
      return temp;
}
int main()
{
   int n,f;
   printf("enter the value: ");
   scanf("%d",&n);

   f=fact(n);
   printf("the factorial of %d is: %d", n,f);

   return 0;
}
