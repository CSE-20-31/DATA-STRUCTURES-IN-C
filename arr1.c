//program to delete a specific element from array//

#include<stdio.h>

int main()
{
    int A[5] = {1,2,3,4,5};
    int element,i;

    printf("enter the element you want to delete: ");
    scanf("%d", &element);

    for(i=0; i<=5; i++)
    {
        if(element==A[i])

        {
                A[i]=0;
                printf("element found\n");
                break;
        }

        else  {
          printf("element not found\n");
        }


    }


    return 0;

}


