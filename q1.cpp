#include <iostream>
#include <string>
using namespace std;
int main()
{
    int temp=1;         
    string array1="Valid input";
    string array2="Invalid input";
    int se;
    cout<<"for what value you want to check choose the options"<<endl;
cout<<"1: integer.\n2: float.\n3: double."<<endl;
cin>>se;          
    switch(se)
    {
        case 1:
        {
            char array3[100];               
            cout<<"Enter any number : ";
            cin>>array3;
   for(int h=0;h<100;h++)
    {
    if (array3[h]==0)                   
      break;
            
      while(temp)              
    {    
   if((array3[h]>=48 && array3[h]<=57) || array3[h]==45)      
      {
    temp=1;
       break; 
          }
      else
    {
    temp=0;
    break;
   }}}
            if(temp==1)
                cout<<array1;
            else
                cout<<array2;
            break;
        }
        case 3:
        {
            char array3[100];
            cout<<"Enter any number : ";
            cin>>array3;
            for(int k=0;k<100;k++)
            {
                if (array3[k]==0)
                break;
      while(temp)
      {    
       if((array3[k]>=48 && array3[k]<=57) || array3[k]==46 || array3[k]==45)  
      {
        temp=1;
      break;
           }
        else
          {
        temp=0;
          break;
     }}}
     if(temp==1)
       cout<<array1;
      else
    cout<<array2;    
     break;
   }
   case 2:
   {
   string array4;
  cout<<"Enter any number : ";
    cin>>array4;
  int m = array4.length();           
   for(int h=0;h<m;h++)
  {
  if(array4[h]==0)
    break;
   while(temp)
   {    
    if(array4[m-2]==102)        
      {     temp=0;
            break;
      }
   if((array4[h]>=48 && array4[h]<=57) || array4[m-1]==102 || array4[h]==46 || array4[h]==45)      
    {
  temp=1;
  break;
  } else
  {
   temp=0;
    break;
   }}} 
   if(temp==1 && array4[m-1]==102)       
    cout<<array1;
    else
     cout<<array2;
    break;
    }
        
    }
    return 0;
}
