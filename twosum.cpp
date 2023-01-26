
//two sum
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
       a[i];
    }
}  

int twoSum(int arr[],int num,int target){
    
   int i=0;//left
   int j=num-1;//right
   int found=0;
    while(i<j){
        
        if((arr[i]+arr[j])<target){
            i++;
        }
        else if((arr[i]+arr[j])==target){
            found=1;
            cout<<arr[i]<<","<<arr[j]<<endl;
            i++;
            j--;
        }
        else if((arr[i]+arr[j])>target){
            j--;
            
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
    cout<<"enter the array elements ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int target;
    cin>>target;
    
    twoSum(a,n,target);
    
    return 0;
}


