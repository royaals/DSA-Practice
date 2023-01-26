#include <iostream>

using namespace std;

int main()
{
    int num1;
    cin>>num1;
    int arr1[num1];
    for(int i=0;i<num1;i++){
        cin>>arr1[i];
    }
    cout<<endl;
    for(int i=0;i<num1;i++){
        cout<<arr1[i]<<" ";
    }
    
     int num2;
    cin>>num2;
    int arr2[num2];
    for(int i=0;i<num2;i++){
        cin>>arr2[i];
    }
    cout<<endl;
    for(int i=0;i<num1;i++){
        cout<<arr2[i]<<" ";
    }
    int i=0;
    int j=0;
    int k=0;
    int ans[num1+num2];
    while(i<num1 && j<num2){
        if(arr1[i]<arr2[j]){
            ans[k]=arr1[i];
            i++;
            k++;
        }
        else{
            ans[k]=arr2[j];
            j++;
            k++;
        }
    }
    while(i<num1){
        ans[k]=arr1[i];
        i++;
        k++;
    }
    while(j<num2){
        ans[k]=arr2[j];
        j++;
        k++;
    }
    int sol[num1+num2];
    for(k=0;k<num1+num2;k++){
        
        ans[k]=sol[k];
    }
    cout<<endl;
    for(k=0;k<num1+num2;k++){
        
        cout<<sol[k]<<" ";
    }
    return 0;
}    
    
