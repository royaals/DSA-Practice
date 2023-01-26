
#include <iostream>

using namespace std;
int gcd(int a,int b){
    int rem;                              
    
          //rem
    while(b!=0){
    rem=a%b;//42%24=18
    a=b;//a=24
    b=rem;//b=18
    }
    cout<<a;//a=b at last last rem
}
int main()
{
    int a,b;
    cout<<"enter two numbers";
    cin>>a,b;
       //42,24
    gcd(a,b);

    return 0;
}

