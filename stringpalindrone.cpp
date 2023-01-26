

#include <iostream>
#include<string>
using namespace std;

bool ispalindrome(string ans){
    int i=0;
    int j=sizeof(ans)-1;
    while(i<j){
    if(ans.at(i)!=ans.at(j)){
        return false;
    }
    else{
        i++;
        j--;
    }
    return true;
}
}

int main()
{
    string s="abccbc";
    int temp;
    string ans;
    for(int i=0;i<sizeof(s);i++){
       
       for(int j=i+1;j<sizeof(s);j++){
           ans=s.substr(i,j); 
            if(ispalindrome(ans) ==true){
                cout<<ans;
            }
           }
       
    }
    return 0;
}

