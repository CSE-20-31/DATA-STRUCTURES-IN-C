#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[100],element,item,pos,i,n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements of array: ");

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The elements of array are: ");

    for(i=0; i<n; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");

    printf("Enter the element you want to insert in the array: ");
    scanf("%d", &item);

    printf("Enter the element after which you want to insert: ");
    scanf("%d", &element);

    for(i=0; i<n; i++)
    {
        if(a[i] == element)
        {
            pos=i;
            break;
        }
    }

    for(i=n-1; i>pos; i--)
    {
        a[i+1]=a[i];
    }
       a[pos+1]=item;


    printf("Array after insertion: ");

    for(i=0; i<=n; i++)
    {
        printf("%d", a[i]);
    }

    return 0;

}




