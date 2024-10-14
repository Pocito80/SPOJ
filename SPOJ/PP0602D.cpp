#include <iostream>
using namespace std;

int main()
{
   int t,b,l;
   cin>>t;
  cin>>b;
  int tab[t];
  for(int i=0;i<t;i++)
  {
      cin>>tab[i];
  }
  for(int j=b;j<t;j++)
  {
      cout<<tab[j]<<" ";
  }
   for(int h=0;h<b;h++)
  {
      cout<<tab[h]<<" ";
  }
}

