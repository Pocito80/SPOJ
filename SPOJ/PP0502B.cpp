#include <iostream>
using namespace std;

int main()
{
    int n, a;
  cin>>n;
  for(int i=0;i<n;i++)
  {
      cin>>a;
      int tab[a];
      for(int j=0;j<a;j++)
      {
          cin>>tab[j];
      }
      for(int h=a;h!=0;h--)
      {
          cout<<tab[h-1]<<" ";
      }
      cout<<endl;
  }
    
}
