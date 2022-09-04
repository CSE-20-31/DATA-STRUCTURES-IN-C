#include<stdio.h>
#include<stdlib.h>

void TOH(int n, char beg, char mid, char end)
{
    if(n==1)
    printf("%c -> %c\n", beg,end);

    else
    {
       TOH(n-1,beg,end,mid);
       printf("%c -> %c\n", beg,end);
       TOH(n-1,mid,beg,end);

    }
}

int main()
{
   int n;
   char a,b,c;
   printf("Enter the no of disks you want to move: ");
   scanf("%d", &n);

   TOH(n,'a','b','c');

   return 0;
}
