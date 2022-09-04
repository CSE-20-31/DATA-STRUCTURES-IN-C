#include<stdio.h>

int fib(int n)
{
    if(n==0 || n==1)
     return 1;

      else
      return (fib(n-1) + fib(n-2));
}

int main()
{
    int n,term;
    printf("Enter the nth term you want to print: ");
    scanf("%d", &n);

    term = fib(n);

     printf("the nth term of the fibonacci series is %d: ", term);

     return 0;
}
