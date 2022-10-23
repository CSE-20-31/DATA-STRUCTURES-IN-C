#include<stdio.h>

int main()
{
    char s[100];
    char c[100];
    int i;
    printf("Enter the string: ");

    gets(s);


     i=0;

    while(s[i] != '\0')
    {
        c[i] = s[i];
        i++;
    }

    c[i]= '\0';
    puts(c);



}
