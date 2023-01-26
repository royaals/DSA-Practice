// power of 2
#include <iostream>

using namespace std;
int main ()
{
  int num; //8
  cout<<"enter no";
  cin>>num;
 
      
          while(num>1){
              if(num%2==0){ 
              num=num/2; //8/2=4,4/2=2,2/2;
          }
          else{
          cout<<" not a power of two";
          break;
         }
      }
      
      if(num==1){
          cout<<"power of two";
      }
  
  return 0;
}



