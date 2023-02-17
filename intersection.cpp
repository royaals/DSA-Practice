/*Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.*/
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        vector<int> ans;
        if(nums1.size()==0 || nums2.size()==0) return ans;
        int m = nums1.size();
        int n = nums2.size(); 

        int i=0,j=0;
        while(i<m && j<n){
        if(nums1[i]<nums2[j]){
            i++;
        }
        else if(nums1[i]>nums2[j]){
            j++;
        }
        else{
            ans.push_back(nums1[i]);
            i++;j++;
        }
    }   

        return ans;
    }
};

int main(){
    int n=5;
    Solution s;
    vector<int> v1;
    vector<int>v2
    int x;
    cout<<"enter 1st vector ele";
    for(int i=0;i<5;i++){
        cin>>x;
        v1.push_back(x);
    }
    for(int i=0;i<5;i++){
        cin>>x;
        v2.push_back(x);
    }
    s.intersect(v1,v2);
     
    return 0;
}