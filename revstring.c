#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    int n,i=0;

    printf("Enter the string: ");
    gets(a);

    while(a[i] != '\0')
    {
          i++;
    }

    n=i;

    for(i=n-1; i>=0; i--)
    {
        printf("%c", a[i]);
    }

    return 0;

}
