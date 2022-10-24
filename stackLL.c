#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;


void push(int item)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));

    temp->data=item;
    temp->next=NULL;

    if(top==NULL)
        top=temp;
    else
        temp->next=top;
        top=temp;
}

int pop()
{
    struct node*temp;
    int item;

    if(top==NULL)
        return -1;
    else
    temp=top;
    item=top->data;
    top=top->next;
    free(temp);
    return item;


}

void view()
{
    struct node *trav;

    if(top==NULL)
        printf("STACK IS EMPTY");
    else
    trav=top;

    while(trav!=NULL)
        {
            printf("%d", trav->data);
            trav=trav->next;
        }

}

int main()
{
  int item,ch;

  while(1)
    {
    printf("Enter 1 for push, 2 for pop, 3 for view: ");
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

        else
            break;
    }
}
