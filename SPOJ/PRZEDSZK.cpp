#include <iostream>
using namespace std;

int main()
{
    int n,a,b,c,d,nwd,nww;
  cin>>n;
  for(int i=0;i<n;i++)
  {
   cin>>a;
   cin>>b;
  nww=a*b;
  if(a>=b)
  {
     do
     {
         c=a%b;
         d=a;
         a=b;
         b=c;
     }while(c!=0);
     
    nww=nww/a;
      cout<<nww<<endl;
  }
 else if(b>a)
  {
     do
     {
         c=b%a;
         d=b;
         b=a;
         a=c;
     }while(c!=0);
     
    nww=nww/b;
      cout<<nww<<endl;
  }
  }
}
