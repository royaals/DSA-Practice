
#include <iostream>

using namespace std;

int main()
{
     int arr[10]={10,20,20,20,50,50,60,80,90,90};
    int num=20;
    int low=1;
    int high=10;
    int first=0;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(num<arr[mid]){
            high=mid-1;
            
        }
        else if(num>arr[mid]){
         
            low=mid+1;
            
        }
        else{
           first=mid;
           high=mid-1;
            
        }
    }
    cout<<first<<endl;
    
      low=0;
    high=9;
     int last=0;
     while(low<=high){
        mid=(low+high)/2;
        if(num<arr[mid]){
            high=mid-1;
            
        }
        else if(num>arr[mid]){
         
            low=mid+1;
            
        }
        else{
           last=mid;
           low=mid+1;
            
        }
    }
    cout<<last;//
    return 0;
}

