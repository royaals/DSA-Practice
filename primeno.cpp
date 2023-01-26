// prime number between two numbers
#include<iostream>
using namespace std;
void prime(int p,int q){
    int i=2,found=0;
    do{
        if(p%i==0){
            found=1;
            break;
        }
        i++;
    }while(i<p);
    if(found==0){
        cout<<p<<" ";
    }
}
int main()
{
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    for(int i=a;i<b;i++){
        prime(i,b);
    }
     return 0;
}





