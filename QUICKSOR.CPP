#include<stdio.h>
#include<conio.h>
int partition(int arr[5],int l,int u)
{
int pivot=arr[l];
int temp;
while(l<u)
	{
		while(arr[l]<pivot&&l<u)
			l++;
		while(arr[u]>pivot&&l<u)
			u--;

		if(l<u)
			{
				temp=arr[l];
				arr[l]=arr[u];
				arr[u]=temp;
			}
	}

	int index=l;
	return index;

}

int quicksort(int arr[5],int l,int u)
{
  int i= partition(arr,l,u);
    if(l<i-1)
    quicksort(arr,l,i-1);
    if(i+1<u)
  quicksort(arr,i+1,u);

    return i;
}
void main()
{
int arr[5]={2,1,4,-1,3};
int low=0,index;
int u=(sizeof(arr)/sizeof(int))-1;
clrscr();
printf("before\n");
for(int i=0;i<5;i++)
printf("|%d|",arr[i]);
index=quicksort(arr,low,u);
    printf("\nafter\n");
	for(int j=0;j<5;j++)
	printf("|%d|",arr[j]);
printf("\n%d is the index of pivot element (%d)",index+1,arr[index]);
}