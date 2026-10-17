#include<fstream.h>
#include<conio.h>
#include<dos.h>
#include<iostream.h>

void main()
{
clrscr();
int i,r,c;
char tic[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
cout<<"player 1 : o    |    player 2 : x"<<endl;
for(int x=0;x<=2;x++)
{
		for(int y=0;y<=2;y++)
		{
		cout<<"|"<<tic[x][y];
		cout<<"|";
		}
	cout<<endl<<"---------"<<endl;
}
for(i=1;i<=9;i++)
	{
	if(i==1||i%2==1)
	cout<<"player 1's turn :-"<<endl;
	else if(i%2==0)
	cout<<"player 2's turn :-"<<endl;
	again:
	re:
		cout<<"enter the row : ";
		cin>>r;
		if(r>3||r<1)
		{
			cout<<"entered invalid row"<<endl;
			goto re;
		}
	ce:
		cout<<"enter the column : ";
		cin>>c;
		if(c>3||c<1)
		{
			cout<<"entered invalid column"<<endl;
			goto ce;
		}

	if(tic[r-1][c-1]!=32)
	{
	cout<<"place already filled "<<endl;
	goto again;
	}
	if(i==1||i%2==1)
		tic[r-1][c-1]='o';
	else if(i%2==0)
		tic[r-1][c-1]='x';
	for(int x=0;x<=2;x++)
	{
		for(int y=0;y<=2;y++)
		{
		cout<<"|"<<tic[x][y];
		cout<<"|";
		}
	cout<<endl<<"---------"<<endl;
	}
	if(i>4)
	{
		if(tic[0][0]=='o'&&tic[1][1]=='o'&&tic[2][2]=='o')
		{
			cout<<"player 1 wins !!!";
			delay(3000);
			break;
		}
		else if(tic[0][0]=='o'&&tic[0][1]=='o'&&tic[0][2]=='o')
		{
			cout<<"player 1 wins !!!";
			delay(3000);
			break;
		}
		else if(tic[0][0]=='o'&&tic[1][0]=='o'&&tic[2][0]=='o')
		{
			cout<<"player 1 wins !!!";
			delay(3000);
			break;
		}
		else if(tic[1][0]=='o'&&tic[1][1]=='o'&&tic[1][2]=='o')
		{
			cout<<"player 1 wins !!!";
			delay(3000);
			break;
		}
		else if(tic[2][0]=='o'&&tic[1][1]=='o'&&tic[0][2]=='o')
		{
			cout<<"player 1 wins !!!";
			delay(3000);
			break;
		}
		else if(tic[0][2]=='o'&&tic[1][2]=='o'&&tic[2][2]=='o')
		{
			cout<<"player 1 wins !!!";
			delay(3000);
			break;
		}
		else if(tic[0][1]=='o'&&tic[1][1]=='o'&&tic[2][1]=='o')
		{
			cout<<"player 1 wins !!!";
			delay(3000);
			break;
		}
		else if(tic[2][0]=='o'&&tic[2][1]=='o'&&tic[2][2]=='o')
		{
			cout<<"player 1 wins !!!";
			delay(3000);
			break;
		}
		else if(tic[0][0]=='x'&&tic[1][1]=='x'&&tic[2][2]=='x')
		{
			cout<<"player 2 wins !!!";
			delay(3000);
			break;
		}
		else if(tic[0][0]=='x'&&tic[0][1]=='x'&&tic[0][2]=='x')
		{
			cout<<"player 2 wins !!!";
			delay(3000);
			break;
		}
		else if(tic[0][0]=='x'&&tic[1][0]=='x'&&tic[2][0]=='x')
		{
			cout<<"player 2 wins !!!";
			delay(3000);
			break;
		}
		else if(tic[1][0]=='x'&&tic[1][1]=='x'&&tic[1][2]=='x')
		{
			cout<<"player 2 wins !!!";
			delay(3000);
			break;
		}
		else if(tic[2][0]=='x'&&tic[1][1]=='x'&&tic[0][2]=='x')
		{
			cout<<"player 2 wins !!!";
			delay(3000);
			break;
		}
		else if(tic[0][2]=='x'&&tic[1][2]=='x'&&tic[2][2]=='x')
		{
			cout<<"player 2 wins !!!";
			delay(3000);
			break;
		}
		else if(tic[0][1]=='x'&&tic[1][1]=='x'&&tic[2][1]=='x')
		{
			cout<<"player 2 wins !!!";
			delay(3000);
			break;
		}
		else if(tic[2][0]=='x'&&tic[2][1]=='x'&&tic[2][2]=='x')
		{
			cout<<"player 2 wins !!!";
			delay(3000);
			break;
		}
		else if(i==9)
		{
			cout<<"Draw !";
			delay(3000);
			break;
		}
	}
}
}











