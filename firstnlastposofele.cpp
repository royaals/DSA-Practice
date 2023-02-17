#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                count++;
                ans.push_back(i);
                break;    
             }
        }

        for(int j=nums.size()-1;j>=0;j--){
            if(nums[j]==target){
                count++;
                ans.push_back(j);
                break;    
             }
        }
        if(count==0){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        else{
            return ans;
        }

    }
};

int main(){
    Solution s;   
   int choice;
   vector<int> v;
   vector<vector<int>> ans;
   cout<<"1.insert ele in vector\n 2.exit\n Enter a choice";
   cin>>choice;
 int i=0;
   while(1){
    cout<<"enter a choice";
    cin>>choice;
    if(choice==1){
        cin>>v[i];
        i++;
    }
    else if(choice==2){
      break;
    }
    else{
        cout<<"invalid choice";
    }

   }
   ans=s.searchRang(v);
   for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
        
     cout<<ans[i][j]<<" ";
    }
    cout<<endl;
   }
   return 0;
}