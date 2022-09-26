//functions of an array//

#include<stdio.h>
#include<conio.h>


int scanarray(int arr[50], int size)
{
    int i;
    printf("Enter the elements of array: ");

    for(i=0; i<size; i++)
      {
         scanf("%d", &arr[i]);
      }

}

int displayarray(int arr[50], int size)
{
    int i;
    printf("Displaying the elements of array: ");

    for(i=0; i<size; i++)

    {
       printf("%d", arr[i]);
    }

}

int main()
{
     int arr[50];
     int size;
     printf("Enter the size of array: ");
     scanf("%d", &size);

     scanarray(arr, size);
     displayarray(arr, size);

     return 0;
}
