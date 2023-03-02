#include<iostream>
#include<cstring>
using namespace std;
int main()
{int n; double totalm,totalf,qeach=0,aeach=0,sumq=0,suma=0,sumqu=0,sumas=0;
cout<<"It is better to input total marks of midterm ,final ,each quiz and assingnments so 1st off all "<<endl;
cout<<"enter total marks of midterm"<<endl;
cin>>totalm;
cout<<"enter total marks of final exam"<<endl;
cin>>totalf;
cout<<"enter total marks of each quize"<<endl;
cin>>qeach;
cout<<"enter total marks of each assignment:"<<endl;
cin>>aeach;
cout<<"enter total number of students"<<endl;

cin>>n;
int f=n*6;
const int size=n,m=f;
string name[size];
string std_reg[size];
double mid[size],fnl[size];
double quiz[6],ass[6],total[size];
cout<<"enter student Registration number and name;"<<endl;
for(int x=0;x<size;x++)//loop for taking input for all students.
{cout<<"reg.no: ";cin>>std_reg[x];cout<<"\tName: ";cin>>name[x];
cout<<" enter midterm marks: ";
cin>>mid[x];
if(mid[x]<0)
while(mid[x]<0)//loop for validation of mid term marks.
{cout<<"oops you enter wrong please enter again"<<endl;
cin>>mid[x];}
cout<<" enter final marks: ";
cin>>fnl[x];
if(fnl[x]<0)
while(fnl[x]<0)//loop for validation of final marks.
{cout<<"oops you enter wrong please enter again"<<endl;
cin>>fnl[x];}
cout<<"enter marks of 6 quizes:"<<endl;
for(int k=0;k<6;k++)
{cout<<"quize: "<<k<<" ";
cin>>quiz[k];
if(quiz[k]<0||quiz[k]>qeach)
while(quiz[k]<0||quiz[k]>qeach)//loop for validation of quizes.
{cout<<"oops you enter wrong please enter again"<<endl;
cin>>quiz[k];}
sumqu=sumqu+quiz[k];}
cout<<"enter marks of 6 assingments:"<<endl;
for(int k=0;k<6;k++)
{cout<<"assingment:"<<k<<" ";
cin>>ass[k];
if(ass[k]<0||ass[k]>aeach)
while(ass[k]<0||ass[k]>aeach)//loop for validation of assignment.
{cout<<"oops you enter wrong please enter again"<<endl;
cin>>ass[k];}
sumas=sumas+ass[k];}
int b=0,cm=0;
for(int m=0;m<6;m++)//loop for sorting quizes.
{for(int l=0;l<6;l++)
	{if(quiz[l]<quiz[l+1])
		{b=quiz[l];
	quiz[l]=quiz[l+1];
	quiz[l+1]=b;
		}
	}
}

	cm=0;
for(int m=0;m<6;m++)//loop for sorting assignments.
{for(int l=0;l<6;l++)
		{if(ass[l]<ass[l+1])
			{cm=ass[l];
			ass[l]=ass[l+1];
			ass[l+1]=cm;
			}
		}
}
			








double wm=0,wq=0,wa=0,wf=0,z=0,y=0;
					


for(int h=0;h<1;h++)//loop for calculating gernal weightage e.g;taking all quizes and assignments.
{wm=(mid[h]*25)/totalm;
wf=(fnl[h]*50)/totalf;
wq=(sumqu*10)/(qeach*6);
wa=(sumas*15)/(aeach*6);
total[h]=wm+wf+wq+wa;}
for(int h=0;h<1;h++)//loop for displaying GPA and Grades.
{if(total[h]<50) 
cout<<"GPA is: 0.00\tGrade: F"<<endl;
else if(total[h]>=50&&total[h]<54)
cout<<std_reg[h]<<"\t"<<name[h]<<"\t"<<"GPA is: 1.00\tGrade: D"<<endl;
else if(total[h]>=54&&total[h]<58)
cout<<std_reg[h]<<"\t"<<name[h]<<"\t"<<"GPA is: 1.33\tGrade: D+"<<endl;
else if(total[h]>=58&&total[h]<62)
cout<<std_reg[h]<<"\t"<<name[h]<<"\t"<<"GPA is: 1.67\tGrade: C-"<<endl;
else if(total[h]>=62&&total[h]<66)
cout<<std_reg[h]<<"\t"<<name[h]<<"\t"<<"GPA is: 2.00\tGrade: C"<<endl;
else if(total[h]>=66&&total[h]<70)
cout<<std_reg[h]<<"\t"<<name[h]<<"\t"<<"GPA is: 2.33\tGrade: C+"<<endl;
else if(total[h]>=70&&total[h]<74)
cout<<std_reg[h]<<"\t"<<name[h]<<"\t"<<"GPA is: 2.67\tGrade: B-"<<endl;
else if(total[h]>=74&&total[h]<78)
cout<<std_reg[h]<<"\t"<<name[h]<<"\t"<<"GPA is: 3.00\tGrade: B"<<endl;
else if(total[h]>=78&&total[h]<82)
cout<<std_reg[h]<<"\t"<<name[h]<<"\t"<<"GPA is: 3.33\tGrade: B+"<<endl;
else if(total[h]>=82&&total[h]<86)
cout<<std_reg[h]<<"\t"<<name[h]<<"\t"<<"GPA is: 3.67\tGrade: A-"<<endl;
else if(total[h]>=86&&total[h]<90)
cout<<std_reg[h]<<"\t"<<name[h]<<"\t"<<"GPA is: 4.00\tGrade:A "<<endl;
else if(total[h]>=90)	
cout<<std_reg[h]<<"\t"<<name[h]<<"\t"<<"GPA is: 4.00\tGrade: A+"<<endl;						
else 
cout<<"wrong"<<endl;}						
						
char t;					
cout<<"do you like grading on the basis of top quizes and assignments\nSo choose \"Y\" for yes and \"N\" for No.";					
cin>>t;	
switch(t)
{ case 'y':
  case 'Y':				
 wm=0,wq=0,wa=0,wf=0,z=0,y=0;
cout<<" how many quizes you want to consider"<<endl;
cin>>z;
cout<<" how many assignments you want to consider"<<endl;
cin>>y;
for(int h=0;h<z;h++)//loop for calculating weightage on the basis on selection of quizes and assignments.
sumq=sumq+quiz[h];
for(int h=0;h<z;h++)
suma=suma+ass[h];
for(int h=0;h<n;h++)
{wm=(mid[h]*25)/totalm;
wf=(fnl[h]*50)/totalf;
wq=(sumq*10)/(qeach*z);
wa=(suma*15)/(aeach*y);
total[h]=wm+wf+wq+wa;}
for(int h=0;h<1;h++)//loop for displaying grades and GPA.
{if(total[h]<50) 
cout<<"GPA is: 0.00\tGrade: F"<<endl;
else if(total[h]>=50&&total[h]<54)
cout<<std_reg[h]<<"\t"<<name[h]<<"\t"<<"GPA is: 1.00\tGrade: D"<<endl;
else if(total[h]>=54&&total[h]<58)
cout<<std_reg[h]<<"\t"<<name[h]<<"\t"<<"GPA is: 1.33\tGrade: D+"<<endl;
else if(total[h]>=58&&total[h]<62)
cout<<std_reg[h]<<"\t"<<name[h]<<"\t"<<"GPA is: 1.67\tGrade: C-"<<endl;
else if(total[h]>=62&&total[h]<66)
cout<<std_reg[h]<<"\t"<<name[h]<<"\t"<<"GPA is: 2.00\tGrade: C"<<endl;
else if(total[h]>=66&&total[h]<70)
cout<<std_reg[h]<<"\t"<<name[h]<<"\t"<<"GPA is: 2.33\tGrade: C+"<<endl;
else if(total[h]>=70&&total[h]<74)
cout<<std_reg[h]<<"\t"<<name[h]<<"\t"<<"GPA is: 2.67\tGrade: B-"<<endl;
else if(total[h]>=74&&total[h]<78)
cout<<std_reg[h]<<"\t"<<name[h]<<"\t"<<"GPA is: 3.00\tGrade: B"<<endl;
else if(total[h]>=78&&total[h]<82)
cout<<std_reg[h]<<"\t"<<name[h]<<"\t"<<"GPA is: 3.33\tGrade: B+"<<endl;
else if(total[h]>=82&&total[h]<86)
cout<<std_reg[h]<<"\t"<<name[h]<<"\t"<<"GPA is: 3.67\tGrade: A-"<<endl;
else if(total[h]>=86&&total[h]<90)
cout<<std_reg[h]<<"\t"<<name[h]<<"\t"<<"GPA is: 4.00\tGrade:A "<<endl;
else if(total[h]>=90)	
cout<<std_reg[h]<<"\t"<<name[h]<<"\t"<<"GPA is: 4.00\tGrade: A+"<<endl;						
else 
cout<<"wrong"<<endl;}	
break;
case 'N':
case 'n':
cout<<"ok as you wish"<<endl;
break;
default:
cout<<"wrong"<<endl;
}
sumq=0,suma=0,sumqu=0,sumas=0;}

return 0;
}





























