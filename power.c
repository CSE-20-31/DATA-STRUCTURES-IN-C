#include<stdio.h>

int power(int a, int b) //function working//
{
    if(b==0)
    return 1;

    else if(b==1)
    return a;

    else return a*power(a, b-1);
}

int main()
{
    int a,b,p;

    printf("Enter the value of a and b: ");
    scanf("%d %d", &a,&b);

    p=power(a,b); //function call//

    printf("the power of %d raised to %d is %d: ", a,b,p);

    return 0;
}
