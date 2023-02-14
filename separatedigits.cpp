/*Given an array of positive integers nums, return an array answer that consists of the digits of each integer in nums after separating them in the same order they appear in nums.

To separate the digits of an integer is to get all the digits it has in the same order.*/

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        stack<int> s;
        int x,rem;
        for(int i=0;i<nums.size();i++){
            x=nums[i];
            while(x!=0){
             rem=x%10;
              s.push(rem); 
              x=x/10;  
            }
            while(!s.empty()){
                ans.push_back(s.top());
                s.pop();
            }
        }
        return ans;
    }
};

int main(){
    int n=5;
    Solution s;
    vector<int> arr;
    int x;
    cout<<"enter vector ele";
    for(int i=0;i<5;i++){
        cin>>x;
        arr.push_back(x);
    }
    s.separatedigits(arr);
     
    return 0;
}