
#include <iostream>
using namespace std;
int main ()
{
  int num, sum = 0, r, temp;
   cout<<"Enter a number \n ";
  cin>>num;
  temp = num;
  while (num > 0)

    {
      r = num % 10;
      sum = sum + (r * r * r);
      num = num / 10;
    }
  if (sum == temp)
    {
      cout<<" armstrong number";
    }
  else
    {
       cout<<" not a armstrong number";
    }
return 0;
}

