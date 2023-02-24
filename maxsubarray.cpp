#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum=0;
   int maxsum=INT_MIN;
        for(int i=0;i<=nums.size()-1;i++){
            sum=0;
            for(int j=i;j<=nums.size()-1;j++){
                sum=sum+nums[j];
                if(sum>maxsum){
                    maxsum=sum;
                }
            }
        }

        return maxsum;
    }
};



int main(){
    
    Solution s;
    vector<int> v;
     
    int x;
    cout<<"enter  vector matrix";
    for(int i=0;i<5;i++){
        
            cin>>x;
            v.push_back(x);
            
        }
   
   cout<<s.maxSubArray(v);
     
    return 0;
}

