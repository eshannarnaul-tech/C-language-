#include<conio.h>
#include<stdio.h>
void merge(int arr[],int l,int m,int u)
{
	int temp;
	int k=0;
	int fl=l;
	int f=m+1;
	int temparr[6];
	while(fl<=m&&f<=u)
	{
		if(arr[fl]<arr[f])
		{
			temparr[k]=arr[fl];
			fl++;
		}
		else
		{
			temparr[k]=arr[f];
			f++;

		}
		k++;
	}
		while(fl<=m)
		{
		temparr[k]=arr[fl];
		fl++;
		k++;
		}
		while(f<=u)
		{
		temparr[k]=arr[f];
		f++;
		k++;
		}
	k=0;
	 for(int e=l;e<=u;e++)
	 {arr[e]=temparr[k];
	 k++;}

}
void ms(int arr[],int l,int u)
{
int m=(l+u)/2;
if(l<u)
{
ms(arr,l,m);
ms(arr,m+1,u);
merge(arr,l,m,u);
}
}
void main()
{
int n;
printf("enter the size of array : ");
scanf("%d",&n);
int arr[n],l=0,u=sizeof(arr)/sizeof(int)-1;
for(int i=0;i<n;i++)
{
	printf("%d element : ",i+1);
	scanf("%d",&arr[i]);
}

ms(arr,l,u);
for(i=0;i<n;i++)
printf("|%d|",arr[i]);
printf("\n%d",u);
}









