#include <iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of an array ";
    cin>>n;
    cout<<"enter the array elements";
    int a[n];
    for(int i=0;i<n;i++){
       cin>>a[i]; 
    }
    
    int maxi=INT_MIN;
    
        for(int i=0;i<n;i++){
            
            maxi=max(maxi,a[i]);
            cout<<maxi<<" ";
        }
    
   
    return 0;
}
