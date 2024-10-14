#include <iostream>
using namespace std;

int main()
{
   int n,l,x;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>x;
        int tab[x];
        for(int j=0;j<x;j++)
        {
            if(j==0)
            {
            cin>>tab[x-1];
            }
            else
            {
                cin>>tab[j-1];
            }
        }
        for(int j=0;j<x;j++)
        {
            cout<<tab[j]<<" ";
        }
        cout<<endl;
   }
}
