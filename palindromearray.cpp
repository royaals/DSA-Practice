#include<iostream>
using namespace std;


class Solution {
public:

    bool check(int a){
        int rem,sum=0;
        int temp=a;
            
            while(a>0){
                rem=a%10;
                sum=(sum*10)+rem;
                a=a/10;
              }
              if(sum==temp){
                  return true;
              }
              else{
              return false;
    }         }     
    int PalinArray(int a[], int n)
    {
        int i;
        for(i=0;i<n;i++){
            if(!check(a[i]) ){
                return false;
            }
            
         }
         return true;
         
    }         
};
 int main(){
int n,arr[10];
cin>>n;
for(int i=0;i<n;i++){
    cin>>arr[i];
}

Solution oj;
cout<<oj.PalinArray(arr,n);

}
