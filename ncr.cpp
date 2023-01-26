
#include <iostream>

using namespace std;

int fact(int n){
    int factorial=1;
    while(n>1){
      factorial=factorial*n;
      n--;
    }
    return factorial;
}

int main()
{
  int n,r,ncr;
  cout<<"Enter the number of items(n) and number of items chosen(r) ";
  cin>>n>>r;
  ncr=fact(n)/(fact(r)*fact(n-r));
  cout<<ncr;
}

