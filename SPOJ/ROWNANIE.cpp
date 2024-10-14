#include <iostream>

using namespace std;

int main()
{
    float a,b,c,d;
    while(cin>>a)
    {
      cin>>b;
      cin>>c;
    d=b*b+(-4*(c*a));
    if(d==0)
    {
         cout<<1<<endl;
    }
    else if(d>0)
    {
         cout<<2<<endl;
    }
else if(d<0)
{
    cout<<0<<endl;
}
}

    return 0;
}
