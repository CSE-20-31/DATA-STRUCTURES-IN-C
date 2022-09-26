#include<stdio.h>
#include<stdlib.h>

struct node
{
   int data;
   struct node*next;
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

          if(head==NULL)
            {
               head=temp;
               tail=temp;
            }

        else
          {
             tail->next=temp;
             tail=temp;
          }

    }
}

void view()
{
   struct node*trav;
    trav=head;

   while(trav!=NULL)
   {
     printf("%d", trav->data);
     trav=trav->next;

   }
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
           tail=temp;
       }
       else
        temp->next=trav->next;
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

        }
    }

}



int main()
{
   int ch;
   while(1)
   {
     printf("Enter 1 for create,  2 for view, 3 for insert, 4 for delete, 5 for exit: ");
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
     break;
   }

}



