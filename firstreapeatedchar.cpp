
#include <iostream>
#include<string>
using namespace std;

string firstRepChar(string s)
{    int i,j;
    string ret="-1";
    string ans;
    for( i=0;i<s.length();i++){
        for( j=i+1;j<s.length();j++){
            if(s[j]==s[i]){
                ans=s[i];
                return ans;
                exit(0);
            }
        }
    }
     
    cout<<ret;
}

int main()
{
    string s;
    cin>>s;
    
    cout<<firstRepChar(s);
 
    return 0;
}
