#include <iostream>

using namespace std;

int main()
{
    int t,n,s,l = 0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        l=0;
        for(int j=0;j<n;j++)
        {
            cin>>s;
          l=l+s; 
        }
        cout<<l<<endl;
    }


    return 0;
}
