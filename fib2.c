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
    int i,n,term;
    printf("Enter the nth term upto which you want to print the series: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)

    {
      term = fib(n);

      printf("the fibonacci series is %d: ", term);
    }


     return 0;
}
