#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a,b,c,x;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a==0)
    {
        if(b==c)
        {
            cout<<"NWR";
        }
        else
        {
            cout<<"BR";
        }
    }
    else
    {
       x=(c-b)/a;
       cout<<fixed<<setprecision(2)<<x;
    }
   
    return 0;
}
