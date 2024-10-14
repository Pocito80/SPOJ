#include <iostream>
using namespace std;

int main()
{
    int t,a,b,i=0;
   cin>>t;
   for(i;i<t;i++)
   {
    cin>>a;
   cin>>b;
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        if(b>a)
        {
            b=b-a;
        }
    }
    cout<<a+b<<endl;
   }
}
