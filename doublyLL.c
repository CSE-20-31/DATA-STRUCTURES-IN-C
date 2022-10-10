#include<stdio.h>
#include<stdlib.h>

struct node
{
   int data;
   struct node*next;
   struct node*prev;
};

struct node *head=NULL, *tail=NULL;

void create()
{
   int i,n;
   struct node*temp;

   printf("Enter the number of nodes: ");
   scanf("%d", &n);

   for(i=1; i<=n; i++)
   {
       temp=(struct node*) malloc(sizeof(struct node));

       printf("Enter the data: ");
       scanf("%d", &temp->data);
          temp->next=NULL;
          temp->prev=NULL;

          if(head==NULL)
            {
               head=temp;
               tail=temp;
            }

        else
          {
             tail->next=temp;
             temp->prev=tail;
             tail=temp;
          }

    }
}

void view()
{
   struct node*trav;
    trav=head;

   while(trav->next!=NULL)
   {
     printf("%d", trav->data);
     trav=trav->next;
   }
   printf("\n");

}


void even()
{
    struct node*trav;
    trav=head;

    while(trav->next!=NULL)
   {
     if(trav->data%2==0)
     {
        printf("%d ", trav->data);
     }
     trav=trav->next;
   }
   printf("\n");

}

void freq()
{
    int item,count=0;
    printf("Enter the element whose freq is to be found: ");
    scanf("%d", &item);

    struct node*trav;
    trav=head;

    while(trav->next!=NULL)
   {
     if(trav->data==item)
     {
         count++;
     }
     trav=trav->next;
     }
   printf("The freq of %d in the linked list is %d", item,count);
   printf("\n");
}


void insert()
{
    int item;
    struct node*temp, *trav;

    temp=(struct node*) malloc(sizeof(struct node));

    printf("Enter the node you want to insert: ");
    scanf("%d", &temp->data);
    temp->next=NULL;

    printf("Enter the node after which you want insert the other node: ");
    scanf("%d", &item);

    trav=head;

    while(trav->data!= item)
    {
        trav=trav->next;
    }
      if(trav->data==tail->data)
       {
           tail->next=temp;
           temp->prev=tail;
           tail=temp;
       }
       else
        temp->next=trav->next;
        temp->prev=trav;
        trav->next->prev=temp;
        trav->next=temp;


}

void delete()
{
    int item;
    struct node*temp, *trav;

    printf("Enter the node you want to delete: ");
    scanf("%d", &item);

    if(head->data==item)  //DELETING HEAD//
    {
        temp=head;
        head=head->next;
        head->prev=NULL;
        free(temp);
    }

    else
    {
        trav=head;

        while(trav->next->data != item)
        {
            trav=trav->next;
        }

        temp=trav->next;

        if(trav->next==tail)  //DELETING TAIL//
        {
            tail=trav;
            trav->next=NULL;
            free(temp);
        }

        else    //DELETING A NODE OTHER THAN OR TAIL//
        {
            trav->next=trav->next->next;
                free(temp);
            trav->next->prev=trav;

        }
    }

}



int main()
{
   int ch;
   while(1)
   {
     printf("Enter 1 for create,  2 for view, 3 for insert, 4 for delete, 5 for even, 6 for freq, 7 for break: ");
     scanf("%d", &ch);

     if(ch==1)
     create();
     if(ch==2)
     view();
     if(ch==3)
     insert();
     if(ch==4)
     delete();
     if(ch==5)
     even();
     if(ch==6)
     freq();
     if(ch==7)
     break;

   }

}



