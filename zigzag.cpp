//zigzag Recursion

#include <iostream>

using namespace std;

int zig(int n){
    if(n==0){
        return 0;
    }
    cout<<"pre"<<n<<endl;
    zig(n-1);
    cout<<" in"<<n<<endl;
    zig(n-1);
    cout<<" post"<<n<<endl;
}

int main()
{
    int n;
    cin>>n;
    zig(n);
    return 0;
}

