#include<alloc.h>
#include<conio.h>
#include<stdio.h>
struct node *search=NULL;
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *input(struct node *start,int val)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
while(1)
{
	if(start==NULL)
	{
		start=search=temp;
		printf("Root created succesfully and value is : %d",start->data);
		break;
	}
	if(temp->data==search->data)
	{
		printf("Already in tree");
		break;
	}
	else if(temp->data<search->data)
	{

		if(search->left==NULL)
		{
			temp=search->left;
		  //	printf("value stored in left");
			break;
		}
		else
		{
			search=search->left;
		}
	}
	else
	{
		if(search->right==NULL)
		{
			temp=search->right;
		    //	printf("value stored in right");
			break;
		}
		else
		{
			search=search->right;
		}
	}
}
return start;
}
void preorder(struct node *pre)
{
if(pre!=NULL)
{
printf("|%d|",pre->data);
preorder(pre->left);
preorder(pre->right);
}
}

void main()
{
int value,a;
struct node *start=NULL;
clrscr();
while(1)
{
printf("enter the choice : ");
scanf("%d",&a);
if(a==1)
{
printf("Enter the value : ");
scanf("%d",&value);
start=input(start,value);
}
else
break;
}
preorder(start);
}
