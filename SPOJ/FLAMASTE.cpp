#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,l,s=1;
    string c,w;
  cin>>n;
  for(int i;i<n;i++)
  {
      cin>>c;
      l= c.length();
      for(int j=0;j<l;j++)
      {
          if(c[j]==c[j+1])
          {
              s++;
          }
          else if(s>2)
          {
              cout<<c[j]<<s;
              s=1;
          }
          else
          {
              for(int h=0;h<s;h++)
              {
              cout<<c[j];
              }
               s=1;
          }
      }
      cout<<endl;
  }
}
