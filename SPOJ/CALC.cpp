#include <iostream>
#include <vector>
using namespace std;

int
main ()
{

  int b, i;
  string a;
  while (cin >> a)
	{
	  cin >> b;
	  cin >> i;
	  if (a == "+")
		{
		  cout << b + i << endl;
		}
	  if (a == "-")
		{
		  cout << b - i << endl;
		}
	  if (a == "/")
		{
		  cout << b / i << endl;
		}
	  if (a == "*")
		{
            cout << b * i << endl;
		}
	  if (a == "%")
		{
        cout << b % i << endl;
		}
	}

  return 0;
}
