
#include <iostream>

using namespace std;
int divisible(int n,int a,int b){
    int d1=n/a; //40/5=8
    int d2=n/b;//40/7=5
    int d3=n/(a*b);//40/(5*7)=1(common factor of 5 & 7)(35)
    cout<<(d1+d2-d3);//8+5-1=12
    return 0;
}

int main()
{
    int n,a,b;
    cout<<"enter the number";
    cin>>n;
    cout<<"enter the two numbers";
    cin>>a>>b;
             //40,5,7
    divisible(n,a,b);

    return 0;
}

