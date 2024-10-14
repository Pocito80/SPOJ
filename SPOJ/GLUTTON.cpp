#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int l,n,t;
    float h,p,o=0,m;
    cin>>l;
    for(int i=0;i<l;i++)
    {
    cin>>n;
    cin>>m;
    o=0;
    for(int j=0;j<n;j++)
    {
     cin>>t;
     h=86400/t;
     h=floor(h);
     o=o+h;
    }   
    p=o/m;
    p=ceil(p);
    cout<<p<<endl;
    }
    return 0;
}
