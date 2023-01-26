#include<iostream>
using namespace std;

int getSecondGreater(int arr[],int num){
    int solarr[num],temp=-1,temp2;
    for(int i=0;i<num;i++){
        temp=-1;
        for(int j=i;j<num;j++){
            
            if(arr[j]>arr[i]){
                
                temp=arr[j];
            }
            
                  
            solarr[i]=temp;
        }  
    }
    for(int i=0;i<num;i++){
        cout<<solarr[i]<<" ";
}
    return 0;
}   
    

    

int main(){
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    getSecondGreater(arr,num);
    return 0;
}

