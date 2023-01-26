// prime numbers till n by sieve of erathosthenes
#include <iostream>

using namespace std;
void sieve(int n){
    int prime[100]={0};
    int i,j;
    for( i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j=j+i){
                prime[j]=1;
                
            }
        }
    }
    
        for(int i=2;i<=n;i++){
            if(prime[i]==0){
            cout<<i<<" ";
            }
        }
    
    
}
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    sieve(n);
    return 0;
}


