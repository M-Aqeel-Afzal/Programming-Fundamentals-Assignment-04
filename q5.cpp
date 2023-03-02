#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int main()
{ int row,clm;int n=0;
int player1,player2;
cout<<"enter rows of table"<<endl;
cin>>row;
cout<<"enter the colums of table"<<endl;
cin>>clm;
const int r=row; const int c=clm;
 int arr[r][c];
for(int k=r-1;k>=0;k--)
{	if(k%2==0||k==r-1)
	{	for(int l=0;l<c;l++)
		{ arr[k][l]=n;
		++n;
		}
	}
	else
	{for(int l=c-1;l>=0;l--)
		{ arr[k][l]=n;
		++n;
		}
	}
}
const int temp=row-1;const int v=row*clm;
int snakehead[temp];int snaketail[temp];int ladderhead[temp];int laddertail[temp];
srand(time(0));
for(int h=0;h<temp;h++)
{
snakehead[h]= (1+c+r) + rand()%(v-c-r);
snaketail[h]=rand()%v +1;

	

	while(snakehead[h]<=snaketail[h])
		{snaketail[h]=rand()%(c*c)+1;}
laddertail[h]=rand()%v+1;
ladderhead[h]= (1+c+r) + rand()%(v-r-c);

while(ladderhead[h]<=laddertail[h]||snakehead[h]==laddertail[h])
		{laddertail[h]= 1+ rand()%v;}

}
for(int h=0;h<temp;h++)
{	for(int k=0;k<temp;k++)

	{while(snakehead[h]==ladderhead[k]||snakehead[h]==v)
	snakehead[h]= (1+c+r) + rand()%(v-r-c);
	}

}
bool rom=0,som=0;int dam=0,sam=0;
int ply1scr=0;int ply2scr=0;
int scor1=0,scor2=0,turn1=1,turn2=1;
while(scor1<r*c || scor2<r*c)
{
dam=(rand()%6)+1;
if(dam==6)
{rom=1;}
 if(rom)
    {ply1scr=dam;
if((scor1+ply1scr)<=(r*c))
	{
	scor1=scor1+ply1scr;
		if(scor1==r*c)
		{
		cout<<"************congratulations***************"<<endl;
		cout<<"player one has won the game"<<endl;
		break;
		}
cout<<"player one score after turn"<<turn1<<": "<<scor1<<endl;
	for( int h=0;h<temp;h++)
		{ //for player1 score counting
			if(scor1==snakehead[h])
			{cout<<"oops snake cought the player one"<<endl;
			scor1=snaketail[h];
			cout<<"score of player one after catching the snake: "<<scor1<<endl;
			}
		else if(scor1==laddertail[h])
			{
				cout<<"player one has clumb up the ladder"<<endl;
				scor1=ladderhead[h];
				cout<<"score of player one after clumbing the ladder: "<<scor1<<endl;
			}

		}
   }
	}
sam=(rand()%6)+1;
   if(sam==6)
{som=1;}
 if(som)
    {ply2scr=sam;
if((scor2+ply2scr)<=(r*c))
	{
	scor2=scor2+ply2scr;
		if(scor2==r*c)
		{
		cout<<"**************congratulations*************"<<endl;
		cout<<"player two has won the game"<<endl;
		break;
		}
cout<<"player two score after turn"<<turn2<<": "<<scor2<<endl;
	for( int k=0;k<temp;k++)
		{if(scor2==snakehead[k])
			{cout<<"oops snake cought the player two"<<endl;
			scor2=snaketail[k];
			cout<<"score of player two after catching the snake: "<<scor2<<endl;
			}
		else if(scor2==laddertail[k])
			{
				cout<<"player two has clumb up the ladder"<<endl;
				scor2=ladderhead[k];
				cout<<"score of player two after clumbing the ladder: "<<scor2<<endl;
			}

		}
	}
turn1++;
turn2++;
  }  
}

cout<<"snakehead"<<endl;
for(int h=0 ; h<temp ;  h++ )
cout<<snakehead[h]<<"     "<<endl;




cout<<"snaketail"<<endl;
for(int k=0 ; k<temp ;  k++ )
cout<<snaketail[k]<<"      "<<endl;




cout<<"ladderhead"<<endl;
for(int h=0 ; h<temp;  h++ )
cout<<ladderhead[h]<<"     "<<endl;



//cout<<"********"<<endl;
cout<<"leadertail"<<endl;
for(int k=0 ; k<temp ;  k++ )
cout<<laddertail[k]<<"      "<<endl;

return 0;
}























