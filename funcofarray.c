
//functions of an array//

#include<stdio.h>
#include<conio.h>


int scanarray(int arr[50], int size)
{
    int i;
    printf("enter the elements of array");

    for(i=0; i<size; i++)
      {
         scanf("%d", &arr[i]);
      }

}

int displayarray(int arr[50], int size)
{
    int i;
    printf("displaying the elements of array");

    for(i=0; i<size; i++)

    {
       printf("%d", arr[i]);
    }

}

int main()
{
     int arr[50];
     int size;
     printf("enter the size of array");
     scanf("%d", &size);

     scanarray(arr[50], size);
     displayarray(arr[50], size);

     return 0;
}
