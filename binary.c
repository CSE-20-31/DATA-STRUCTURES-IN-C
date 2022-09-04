#include<stdio.h>

void binary(int n)
{

    if(n==0)
    printf("0");

    else if(n==1)
    printf("1");

    else
    {
         binary(n/2);

         printf("%d", n%2);

    }
}

    int main()
    {
         int n;

         printf("Enter the decimal number whose binary you want to calculate: ");
         scanf("%d", &n);

             binary(n);

    }


