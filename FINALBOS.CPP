#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node *front=NULL;struct node *rear=NULL;
struct node
{
int data;
struct node *prev;
struct node *link;
};

int enque(int value)
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
printf("heap is full");
else
{
newnode->data=value;
newnode->link=NULL;
if(front==NULL)
{
newnode->prev=NULL;
front=rear=newnode;
}
else
{
rear->prev=front;
rear->link=newnode;
rear=newnode;
}

}
return value;
}
void deque()
{
int value;
struct node *temp=front;
if(temp==NULL)
{
printf("heap is empty");
}
else
{
printf("heap is deleting ...");
value=front->data;
printf("%d deleted succesfully \n",value);
front=front->link;
free(temp);
temp=NULL;
}
}
void peek()
{
if(front==NULL)
printf("heap is empty");
else
printf("%d",front->data);
}
void main()
{

	int choice,value2,deletedval,value;
	clrscr();
	while(1)
	{
	printf("\n1 for enque \n2 for deque \n3 for peek  \n4 for quit \n");
	printf("enter your choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		printf("enter the element for push : ");
		scanf("%d",&value2);
		value=enque(value2);
		printf("%d stored succesfully ",value);
		break;
		case 2:
		deque();
		break;
		case 3:
		peek();
		break;
		default :
		printf("wrong choice");
	}
	if(choice==4)
	break;
	}
}









