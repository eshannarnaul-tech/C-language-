#include<conio.h>
#include<iostream.h>
void push(int num[5],int z)
{
if(z==5)
cout<<"stack already full";
else
{
	cout<<"enter the number to fill in stack : ";
	cin>>num[z];
	cout<<endl<<num[z]<<" pushed succesfully"<<endl;

}
}
void pop(int num[5],int z)
{
if(z==0)
cout<<"stack is already empty "<<endl;
else
{
	cout<<num[z-1]<<" deleted succesfully "<<endl;
}
}
void peek(int num[5],int z)
{
if(z==0)
cout<<"stack is already empty"<<endl;
else
{
cout<<num[z-1]<<" is the most recent stack number "<<endl;
}

}
void main()
{
	int num[5],menu,z=0;
	clrscr();
	do
	{
		cout<<"press 1 for push : "<<endl<<"press 2 for pop : "<<endl<<"press 3 for peek : "<<endl<<"press 4 for End task : "<<endl;
		cin>>menu;

		if(menu==1)
		{
		push(num,z);
			if(z!=5)
			z++;
		}
		if(menu==2)
		{
		 pop(num,z);
			if(z!=0)
			z--;

		}
		if(menu==3)
		peek(num,z);
		if(menu==4)
		break;
		if(menu<=0||menu>=5)
		{
			cout<<"entered invalid menu"<<endl<<"kindly enter valid menu : ";

		}
	 }while(menu!=4);
}




















