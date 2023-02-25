#include<iostream>
using namespace std;

int main()
{
       int arr[20],i,num,poscount=0,negcount=0,zerocount=0;
       cout<<"Enter the size of array \n";
         cin>>num;
       cout<<"Enter the array elemnets \n";
       for( i=0;i<num;i++)
        {
           cin>>arr[i];  
            
        }
        for(i=0;i<num;i++)
        {
            if(arr[i]>0)
            {
              poscount++;
            } 
              if(arr[i]==0)
              {
                  zerocount++;
              }
            if(arr[i]<0)
            {
              negcount++;  
            }
        }
            cout<<"positive count in array is "<<poscount<<"negative count  in the array"<<negcount<<"zero count in the array"<<zerocount;
        
 }

