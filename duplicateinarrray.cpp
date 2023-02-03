//Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
         unordered_set<int>s;
         int count=nums.size();

         for(int i=0;i<nums.size();i++){
             s.insert(nums[i]);
         }
         if(count!=s.size()){
           return true;
         }
         else{
            return false;
         }
        
    }
};

int main(){
    Solution ob;
    vector<int> num;
    int n;
    cout<<"enter the number of elements";
    cin>>n;
    int x;
    
    for(int i=0;i<n;i++){
        cout<<"enter the ele";
        cin>>x;
        num.push_back(x);
    }
    cout<<ob.containsDuplicate(num);
}