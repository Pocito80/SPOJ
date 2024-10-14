#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n,a,s,l,l2;
    string s2;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
         if(a>9)
     {
         cout<<"0 0"<<endl;
     }
     else
     {
        s=1;
        for(int j=1;j<=a;j++)
        {
        s=s*j;
   
        }
        s2=to_string(s);
        l=s2.length();
        if(l==1)
        {
        cout<<"0"<<" "<<s2[l-1]<<endl;
        }
        else
        {
        cout<<s2[l-2]<<" "<<s2[l-1]<<endl;
        }
     }
    }
}


