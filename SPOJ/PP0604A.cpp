
#include <iostream>

using namespace std;

int main()
{
    int t = 0,n = 0, p;
    float s,m = 0, min;
   cin>>t;
   for(int i=0; i<t;i++)
   {
    cin>>n;
    int tab[n];
    s=0;
    m = 0;
    for(int j=0;j<n;j++)
    {
        cin>>tab[j];
        s=s+tab[j];
    }
    s=s/n;
    min = abs(tab[0]-s);
    p=0;
     for(int j=0;j<n;j++)
    {
    
     m = abs(tab[j]-s);
     if(m<min)
     {
         p=j;
         min = abs(tab[j]-s);
     }
    }
    cout<<tab[p]<<endl;
    }
    return 0;
}
