#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int i,j,res=0;
        vector<int> v;
        
        for(i=0;i<matrix.size();i++){
            for(j=0;j<matrix[i].size();j++){
                 v.push_back(matrix[i][j]);
            }
        }
        sort(v.begin(),v.end());
        
        return v[k-1];
    }
};

int main(){
    
    Solution s;
    vector<vector<int>> v[5];
     
    int x;
    cout<<"enter  vector matrix";
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
          cin>>x;
          v.push_back(x);
          
        }
       
    }
   cout<"enter key ele";
    int key;
    cin>>key;
   cout<<s.kthSmallest(v,key);
     
    return 0;
}
