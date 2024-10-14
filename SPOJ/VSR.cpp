#include <iostream>
using namespace std;

int
main ()
{
    int h,n,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>h;
        cin>>a;
        cout<<(2*h*a)/(h+a)<<endl;
    }
}
