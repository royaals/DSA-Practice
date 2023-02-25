// make your own power function
#include<iostream>
using namespace std;

int main ()
{
  int base, power;
  cout<<"Enter a base and power number\n";
  cin>>base>>power;
  powerf (base, power);
  return 0;
}

void powerf (int base, int power)
{
  int sum = 1, count = 1;

  while (count <= power)
    {
      sum = sum * base;
      count++;
    }
  cout<<"The power:"<<sum;
}

