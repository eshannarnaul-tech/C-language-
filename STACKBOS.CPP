#include<alloc.h>
#include<conio.h>
#include<stdio.h>
struct node*top=NULL;
struct node
{
int data;
struct node *link;
};
void push(int value)
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
printf("the heap is full");
else
{
newnode->data=value;
newnode->link=top;
top=newnode;
printf("\n%d value stored succesfully",value);
}
}
void pop()
{
struct node *temp=top;
if(temp==NULL)
{
printf("the stack is already empty ");
}
else
{
printf("\n%d value is deleted",temp->data);
top=top->link;
free(temp);
temp=NULL;
}
}
void main()
{
clrscr();
int choice,value;
while(1)
{
printf("1 for push \n2 for pop\n3 for quit\nenter your choice : ");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
printf("Enter the number to push : ");
scanf("%d",&value);
push(value);
break;
}
case 2:
pop();
break;
case 3:
break;
}
if(choice==3)
break;
}
}









