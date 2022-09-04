#include<stdio.h>
#include<stdlib.h>
#define max 100
int stack[max];
int top= -1;
char expr[100] = "235*+";


int isoperator(char x)
{
   if(x=='+'|| x=='-'|| x=='*'|| x=='/'|| x=='^')
   return 1;
   else
   return 0;
}

int evaluate(int a, int b, char opr)
{

    if(opr=='+')
    return b+a;
    if(opr=='-')
    return b-a;
    if(opr=='*')
    return b*a;
    if(opr=='/')
    return b/a;
    if(opr=='^')
    return b^a;

}

void push(int x)
{
    stack[++top] = x ;
}

int pop()
{
    return stack [top--];

}

 int main()
 {
     int a, b, r;
     int i = 0;
     while(expr[i]!= '\0')
     {
        if(!isoperator(expr[i]))
        {
           push(expr[i]- 48);
        }
        else
        {
            a=pop();
            b=pop();

            r=evaluate(a,b,expr[i]);
            push(r);
        } i++;
      }
      printf("RESULT= %d", pop());

      return 0;
 }
