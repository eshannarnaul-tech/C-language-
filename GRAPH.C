#include<conio.h>
#include<stdio.h>
int arr[3][3];
int creategraph(int s,int d)
{
	if((s>0&&s<4)&&(d>0&&d<4))
	{
	arr[s-1][d-1]=1;
	return 1;
	}
	else
	{
		return 0;
	}
}
int deledge(int s,int d)
{
if(arr[s-1][d-1]==1)
{
	arr[s-1][d-1]=0;
	return 1;
}
else
return 0;
}
void main()
{
int i,j,del,answer,source,destination;
clrscr();
printf("Enter the source for 3 by 3 graph : ");
scanf("%d",&source);
printf("Enter the destination for 3 by 3 graph : ");
scanf("%d",&destination);
answer=creategraph(source,destination);
if(answer==1)
printf("Edge created succefully\n");
else
printf("Invalid source or destination\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("|%d|",arr[i][j]);

	}
	printf("\n");
}

printf("Enter the source to delete : ");
scanf("%d",&source);
printf("Enter the destination delete : ");
scanf("%d",&destination);
	if((source>0&&source<4)&&(destination>0&&destination<4))
	{
		del=deledge(source,destination);
		if(del==1)
		printf("Edge deleted succefully\n");
		else if(del==0)
		printf("Edge not found\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("|%d|",arr[i][j]);

		}
			printf("\n");
		}
	}
	else
	printf("Invalid source or destination\n");

}









