//three sum pair
#include <iostream>

using namespace std;
#define n 10
int a[n];
void sort()
{
 
  
  for (int i = 1; i < n; i++)
    {
      int current = a[i];
      int j = i - 1;
      while (j >= 0 && a[j] > current)
	{
	  a[j + 1] = a[j];
	  a[j] = current;
	  j--;
	}
      a[j + 1] = current;
    }
  for (int i = 0; i < n; i++)
    {
      cout << a[i] << " ";
    }
}    
    
int threeSum(int arr[],int num,int target){
    int found=0;
   for(int i=0;i<num-2;i++){
         int j=i+1;//left
   int k=num-1;//right
   if(arr[i]==arr[i-1]){
           continue; //to cancel out duplicate
        }
    while(j<k){
        
        
        if((arr[i]+arr[j]+arr[k])<target){
            j++;
        }
        else if((arr[i]+arr[j]+arr[k])==target){
            found=1;
            cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
            j++;
            k--;
        }
        else if((arr[i]+arr[j]+arr[k])>target){
            k--;
            
        }
      
    }
   }
   if(found==0){
      cout<<0; 
    }
    else{
        
    }
  return 0;
}

int main()
{
  
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int target;
    cin>>target;
    
    threeSum(a,n,target);
    
    return 0;
}


