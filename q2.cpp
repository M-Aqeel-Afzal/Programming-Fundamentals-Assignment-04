#include<iostream>
using namespace std;
int main()
{int a=0;
int a1[3],a2[4],a3[4],a4[4],a5[6],merge_arry[21];//five arrys of diffrent sizes.
cout<<"enter values of arry one"<<endl;
cin>>a1[a];
for( a=1;a<3;a++)//loop for values of arry one.
{cin>>a1[a];
 	if(a1[a-1]>a1[a])
		{while(a1[a-1]>a1[a])
			{cout<<"you enter wrong input so try again"<<endl;
			cin>>a1[a];}
		}
}
a=0;
cout<<"enter values of arry two"<<endl;
cin>>a2[a];
for( a=1;a<4;a++)//loop for values of arry two.
{cin>>a2[a];
 	if(a2[a-1]>a2[a])
		{while(a2[a-1]>a2[a])
			{cout<<"you enter wrong input so try again"<<endl;
			cin>>a2[a];}
		}
}
a=0;
cout<<"enter values of arry three"<<endl;
cin>>a3[a];
for( a=1;a<4;a++)//loop for values of arry three.
{cin>>a3[a];
 	if(a3[a-1]>a3[a])
		{while(a3[a-1]>a3[a])
			{cout<<"you enter wrong input so try again"<<endl;
			cin>>a3[a];}
		}
}a=0;
cout<<"enter values of arry four"<<endl;
cin>>a4[a];
for( a=1;a<4;a++)//loop for values of arry four.
{cin>>a4[a];
	 if(a4[a-1]>a4[a])
		{while(a4[a-1]>a4[a])
			{cout<<"you enter wrong input so try again"<<endl;
			cin>>a4[a];}
		}
}a=0;
cout<<"enter values of arry five"<<endl;
cin>>a5[a];
for( a=1;a<6;a++)//loop for values of arry five.
{cin>>a5[a];
 	if(a5[a-1]>a5[a])
		{while(a5[a-1]>a5[a])
		{cout<<"you enter wrong input so try again"<<endl;
		cin>>a5[a];}
		}
}
int b=0,c=0,d=0,e=0,z=0;
for(int i=0;i<21;i++)//loop for merging the values of all arrys in a single arry.
{merge_arry[i]=a1[i];
if(i>2&&i<7)
{merge_arry[i]=a2[b];
b++;}
if(i>6&&i<11)
{merge_arry[i]=a3[c];
c++;}
if(i>10&&i<15)
{merge_arry[i]=a4[d];
d++;}
if(i>14&&i<21)
{merge_arry[i]=a5[e];
e++;}}
for(int k=0;k<21;k++)//loop for sorting.
{for(int l=k+1;l<21;l++)
	{if(merge_arry[l]>merge_arry[k])
	{z=merge_arry[k];
	merge_arry[k]=merge_arry[l];
	merge_arry[l]=z;}}
if(merge_arry[k-1]==merge_arry[k])//condition to avoid repitition.
continue;
cout<<merge_arry[k]<<",";}

return 0;
}









