//tower of hanoi
#include <iostream>

using namespace std;
int toh(int n,char src,char dest, char helper){
    if(n==0){
        return 0;
    }
    toh(n-1,src,helper,dest);
    cout<<"move "<<src<<"to"<<dest<<endl;
    toh(n-1,helper,dest,src);
}

int main()
{ 
    int n;
    cin>>n;
    toh(n,'A','B','C');
    

    return 0;
}
