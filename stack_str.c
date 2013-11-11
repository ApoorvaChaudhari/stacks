#include<stdio.h>
typedef struct
{
int a[100];
int top;
}stack;

void push(stack *s,int x)
{
if(s->top==99)
printf("stack full \n");
else
s->a[++s->top]=x;
}

int pop(stack *s)
{
int x;
if(s->top<0)
printf("Stack Empty \n");
else
{
x=s->a[s->top--];
return x;
}
}

void display(stack s)
{
int i;
for(i=s.top;i>=0;i--)
{
printf("%d\n",s.a[i]);
}
}

int main()
{
stack s1;
int m,n;
s1.top=-1;
push(&s1,10);
display(s1);
m=pop(&s1);
pop(&s1);
display(s1);
return 0;
}
