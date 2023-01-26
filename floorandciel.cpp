

#include <iostream>

using namespace std;

int main()
{
    int arr[10]={10,20,30,40,50,60,70,80,90,100};
    int num=120;
    int low=1;
    int high=10;
    int floors=0;
    int ciel=0;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(num<arr[mid]){
            high=mid-1;
            ciel=arr[mid];
        }
        else if(num>arr[mid]){
         
            low=mid+1;
            floors=arr[mid];
        }
        else{
            floors=arr[mid];
            ciel=arr[mid];
            break;
        }
    }
    if(floors!=0 && ciel!=0){
        cout<<floors<<" "<<ciel;
    }
    else{
      cout<<0;
    } 
    return 0;
}


