
#include <iostream>
#include<climits>
using namespace std;

int main()
{
   int n;
  cout<<"enter the size of an array";
    cin>>n;
    int a[n];
    cout<<"enter the array elemnts";
   for(int i=0;i<n;i++){
       cin>>a[i];
       
   }
   int currentsum=0;
   int maxsum=INT_MIN;
   
   for(int i=0;i<n;i++){
       currentsum+=a[i];
     
        maxsum=max(maxsum,currentsum);
   }
     cout<<maxsum;
    return 0;
}

