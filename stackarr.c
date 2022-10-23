#include<stdio.h>
#define MAX 50
int  top = -1;
int stack[MAX];

void push(int item)
{
    if(top == MAX-1)
        printf("OVERFLOW");

    else
    {
       top++;
       stack[top]=item;
    }
}

int pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];

}

void view()
{
    if(top == -1)
      printf("STACK IS EMPTY");

      else
      {
          int i=0;
          while(i<=top)
          {
            printf("%d", stack[i]);
            i++;
          }
      }
      printf("\n");
}


int main()
{

    int item,ch;

while(1)
    {
    printf("Enter 1 for push, 2 for pop, 3 for view, 4 for exit: ");
    scanf("%d", &ch);




        if(ch==1)
        {
          printf("Enter the item you want to push into the stack: ");
          scanf("%d", &item);
          push(item);
        }

        else if(ch==2)
        {
          item=pop();

          if(item == -1)
            printf("UNDERFLOW");
          else
            printf("%d", item);

            printf("\n");
        }

        else if(ch==3)
            view();

        else if(ch==4)
            break;
    }
}

