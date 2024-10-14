#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  long double r, d, p, S, c;
  cin>>r;
  cin>>d;
  d=d/2;
  if(r>d)
    {
  c=r*r-d*d;
  S=c*3.141592654;
  cout<<fixed<<S;
    }
    else
    {
          cout<<0;
    }
}
