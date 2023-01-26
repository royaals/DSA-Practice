//dutch national flag or 0's,1's,2's algorthm
#include <iostream>

using namespace std;

int swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    return 0;
}


int sort(int arr[],int n){
    int i=0;
    int j=0;
    int k=n-1;
    while(i<=k){
        if(arr[i]==0){
            swap(arr,i,j);
            i++;
            j++;
        }
        else if(arr[i]==1){
            i++;
            
        }
        else if(arr[i]==2){
            swap(arr,i,k);
            k--;
            
        }
    }
    return arr[n];
}


int main()
{   
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
