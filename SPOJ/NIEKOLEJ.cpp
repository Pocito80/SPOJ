#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    if(t<3&&t>0)
    {
        cout<<"NIE";
    }
    else if(t==0)
    {
        cout<<"0";
    }
    else
    {
         t=t+1;
        for(int i=1;i<t;i=i+2)
        {
            cout<<i<<" ";
        }
         for(int j=0;j<t;j=j+2)
        {
            cout<<j<<" ";
        }
    }
    return 0;
}
