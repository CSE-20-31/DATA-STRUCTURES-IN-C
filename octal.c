#include<stdio.h>

void octal(int n)
{

    if(n>=0 && n<8)
    printf("%d", n);



    else
    {
         octal(n/8);

         printf("%d", n%8);

    }
}

    int main()
    {
         int n;

         printf("Enter the decimal number whose octal you want to calculate: ");
         scanf("%d", &n);

             octal(n);

    }


