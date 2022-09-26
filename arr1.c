//program to delete a specific element from array//

#include<stdio.h>

int main()
{
    int A[5] = {1,2,3,4,5};
    int element,i;
    int flag=0;

    printf("enter the element you want to delete: ");
    scanf("%d", &element);

    for(i=0; i<5; i++)
    {
        if(element==A[i])

        {
                A[i]=0;
                flag = 1;
                printf("Element found\n");
                break;
        }
    }

    if(flag==0)
        printf("Element not found");

    for(i=0; i<5; i++)
        printf("%d", A[i]);


    return 0;

}


