#include <iostream>
using namespace std;

int
main ()
{
    int n,a;
    cin>>n;
    cin>>a;
    int tab[n][a];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<a;j++)
        {
            cin>>tab[i][j];
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<tab[j][i]<<" ";
        }
        cout<<endl;
    }
}
