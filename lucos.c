#include<stdio.h>

int lucos(int n)
{
    if(n==1 || n==2 || n==3)
     return 1;

      else
      return (lucos(n-1) + lucos(n-2) + lucos(n-3));
}

int main()
{
    int n,term;
    printf("Enter the nth term you want to print: ");
    scanf("%d", &n);

    term = lucos(n);

     printf("the nth term of the lucos series is %d: ", term);

     return 0;
}
