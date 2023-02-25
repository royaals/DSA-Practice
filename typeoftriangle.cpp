
#include <iostream>

using namespace std;

int main()
{
    int side_a,side_b,side_c;
    cout<<"enter three sides"<<endl;
    cin>>side_a>>side_b>>side_c;
    
    
     if( side_a==side_b && side_b==side_c ){
        cout<<"equilateral triangle";
    }
    else if( side_a==side_b|| side_b==side_c || side_a==side_c ){
        cout<<"isoseles triangle";
    }
    else{
        cout<<"scalene triangle";
    }
    

    return 0;
}
