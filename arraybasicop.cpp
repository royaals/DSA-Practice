
#include <iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    int arr[15];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    
    
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //insertion
    int ele;
    cin>>ele;
    int pos;
    cin>>pos;
    for(int i=num;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=ele;
    
    cout<<"after insertion \n";
    for(int i=0;i<num+1;i++){
        cout<<arr[i]<<" ";
    }
    //deletion 
    cout<<"after deletion \n";
    for(int i=0;i<num;i++){
        if(arr[i]==ele){
            for(int j=i;j<num;j++){
                arr[i]=arr[i+1];
            }
            break;
        }
    }
    for(int i=0;i<num-1;i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}


