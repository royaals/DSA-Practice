#include<iostream>
#include<stdlib.h>
#include<vector>
#include<set>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int target = 0;
        sort(nums.begin(), nums.end());
        set<vector<int>> s;
        vector<vector<int>> ans;
        for (int i = 0; i < nums.size(); i++){
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == target) {
                    s.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                } else if (sum < target) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        for(auto triplets : s)
            ans.push_back(triplets);
        return ans;
    }
};

int main(){

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
   ans=threesum(v);
   for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
        
     cout<<ans[i][j]<<" ";
    }
    cout<<endl;
   }
   return 0;
}

