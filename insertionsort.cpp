
#include <iostream>

using namespace std;

int
main ()
{
  int n;
  cout<<"Enter the Number of elements";
  cin >> n;
  int a[n];
  cout<<"Enter the array elements";
  for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
  for (int i = 1; i < n; i++)
    {
      int current = a[i];
      int j = i - 1;
      while (j >= 0 && a[j] > current)
	{
	  a[j + 1] = a[j];
	  a[j] = current;
	  j--;
	}
      a[j + 1] = current;
    }
  for (int i = 0; i < n; i++)
    {
      cout << a[i] << " ";
    }

  return 0;
}

