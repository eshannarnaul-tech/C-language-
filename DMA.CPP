#include<alloc.h>
#include<conio.h>
#include<stdio.h>
void push()
{

}
void main()
{
clrscr();
int *ptr,size,menu;
printf("enter the size : ");
scanf("%d",&size);
ptr=(int*)malloc(sizeof(int)*size);
for(int i=0;i<size;i++)
{
	printf("enter 1 for push 2 for pop 3 for back\n");
	scanf("%d",&menu);
	if(menu==1)
	{
		printf("enter the numbers to put in stack : ");
		scanf("%d",&ptr[i]);
	}
	else if(menu==2)
	{
		printf("number deleted sucessfully");
	}
	else if(menu==3)
	break;
	printf("%d ",ptr[i]);

}
free(ptr);

ptr=NULL;
printf("%d",*ptr);
}









