//merge sort
#include <iostream>

using namespace std;
int b[10];
void merge(int arr[], int left,int mid,int right){
    
    int i=left;
    int j=mid+1;
    int k=left;
    while(i<=mid &&j<=right){
       if(arr[i]<arr[j]){
           b[k]=arr[i];
           i++;
        
       } 
       else if(arr[j]<arr[i]){
           b[k]=arr[j];
           j++;
          
       }
       k++;
    }
    if(i>mid){
        while(j<=right){
            b[k]=arr[j];
            j++;
            k++;
            
        }
    }
    else if(j>right){
        while(i<=mid){
            b[k]=arr[i];
            i++;
            k++;
        }
    }
    for(k=0;k<5;k++){
        arr[k]=b[k];
    }
    
}

void divide(int arr[], int left, int right){
    int i;
    if(left < right){
    int mid = (left + right)/2;
    divide(arr,left,mid);
    divide(arr,mid+1,right);
    merge(arr,left,mid,right);
    }
   for( i=0;i<5;i++);
   {
       cout<<arr[i]<<" ";
   }
}

int main()
{ 
  
    int arr[5];
    for(int i = 0;i < 5;i++){
        
        cin>>arr[i];
        
    }
    
    divide(arr,0,5);

    return 0;
}


