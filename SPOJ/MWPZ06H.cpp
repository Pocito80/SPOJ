#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a;
        int tab[a],tab2[a];
        for(int j=0;j<a;j++)
        {
            cin>>tab[j];
        }
        sort(tab,tab + a);
        int l=a-1;
        do
        {
            cout<<tab[l]<<" ";
            l--;
        }while(tab[l+1]==tab[l]);
         for(int j=0;j<=l;j++)
        {
            cout<<tab[j]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
