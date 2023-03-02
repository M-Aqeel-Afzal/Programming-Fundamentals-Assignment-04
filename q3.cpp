#include<iostream>
#include<cstring>
using namespace std;
int main()
{int s=1;
string csr_id[7]={"CSR_01","CSR_02","CSR_03","CSR_04","CSR_05","CSR_06","CSR_07"};
string csr_name[7];
int hours[7],hour[7],com_rezo[7];
int com_rez[7];int n;
double payrat,payrate[7],total_com=0;
double wag[7];
for(int i=0;i<7;i++)//loop for taking input for name,hours and complaints.
{cout<<"enter name of "<<csr_id[i]<<endl;
cin>>csr_name[i];
cout<<"enter number of hours worked by: "<<csr_id[i]<<endl;
cin>>hours[i];
if(hours[i]<0)
while(hours[i]<0)//loop fpr validation of hours
{cout<<"oops you enter wrong please enter again"<<endl;
cin>>hours[i];}
cout<<"enter number of complaints resolved by:"<<csr_id[i]<<endl;
cin>>com_rez[i];
if(com_rez[i]<0)
while(com_rez[i]<0)//loop for validation of complaints.
{cout<<"oops you enter wrong please enter again"<<endl;
cin>>com_rez[i];}
total_com=total_com + com_rez[i];
}

	for(int j=0;j<7;j++)//loop for calculating wages.
		{payrat=25+25*(com_rez[j]/total_com);
		payrate[j]=payrat;
		wag[j]=payrate[j]*hours[j];
		}
	for(int k=0;k<7;k++)//loop for displaying name and gross wages.
		cout<<"identification number: "<<csr_id[k]<<"\t"<<"name: "<<csr_name[k]<<"\t"<<"gross wages="<<wag[k]<<endl<<endl;
cout<<"enter number of top CSRs"<<endl;

for(int d=0;d<7;d++)//that loop copy complaints and hours into other arrays.
{com_rezo[d]=com_rez[d];
hour[d]=hours[d];
}
cin>>n;	int z=0,x=0;
for(int m=0;m<7;m++)//loop for sorting .
{for(int l=0;l<7;l++)
	{if(com_rez[l]<com_rez[l+1])
	{z=com_rez[l];
	com_rez[l]=com_rez[l+1];
	com_rez[l+1]=z;}
			if(hours[l]<hours[l+1])
	{x=hours[l];
	hours[l]=hours[l+1];
	hours[l+1]=x;}}}
cout<<"top "<<n<<" CSRs"<<" on the basis of complaints resolved are"<<endl;
for(int h=0;h<n;h++)//loop for showing top CSRs on the basis of complaints resolved
{for(int k=0;k<7;k++ )
if(com_rez[h]==com_rezo[k])
cout<<"Name: "<<csr_name[k]<<"  "<<"complaints: "<<com_rez[h]<<endl;}	
cout<<"top "<<n<<" CSRs"<<" on the basis of working hours are"<<endl;
for(int y=0;y<n;y++)//loop for showing top CSRs on the basis of working hours.
{for(int k=0;k<7;k++ )
if(hours[y]==hour[k])
cout<<"Name: "<<csr_name[k]<<"  "<<"hours: "<<hours[y]<<endl;}	
return 0;
}








