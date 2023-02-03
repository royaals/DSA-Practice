#include <bits/stdc++.h>
using namespace std;
class Solution {

public:
    vector<int> plusOne(vector<int>& digits) {
        int idx=digits.size()-1;
        while(idx>=0)
        {
            if(digits[idx]==9)
            {
                digits[idx]=0;
            }
            else
            {
                digits[idx]+=1;
                return digits;
            }
            idx--;
        }
        digits.insert(digits.begin(),1);
        return digits;
        
    }
};

int main(){
    Solution s;
    int n=5;
    vector<int> digits;
    for(int i=0;i<5;i++){
        cin>>digits[i];
    }
    s.plusOne(digits);
    for(int i=0;i<5;i++){
        cout<<digits[i];
    }
}