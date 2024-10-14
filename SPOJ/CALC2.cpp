#include <iostream>
#include <vector>
using namespace std;

int
main ()
{
    int tab[10];
  int b, i;
  string a;
  while (cin >> a)
	{
	  cin >> b;
	  cin >> i;
	  if (a == "z")
	  {
	      tab[b]=i;
	  }
	  if (a == "+")
		{
		  cout << tab[b] + tab[i] << endl;
		}
	  if (a == "-")
		{
		  cout << tab[b] -tab[i] << endl;
		}
	  if (a == "/")
		{
		  cout << tab[b] /tab[i] << endl;
		}
	  if (a == "*")
		{
            cout << tab[b] * tab[i] << endl;
		}
	  if (a == "%")
		{
        cout << tab[b] % tab[i] << endl;
		}
	}

  return 0;
}
