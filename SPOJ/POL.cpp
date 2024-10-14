#include <iostream>
#include <string>
using namespace std;

int
main ()
{
    int h,n;
    cin>>n;
    string a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        h = a.length();
       for(int j = 0;j<(h/2);j++)
       {
           cout<<a[j];
       }
       cout<<endl;
    }
}
