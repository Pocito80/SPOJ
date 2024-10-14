#include <iostream>
using namespace std;

int
main ()
{
    int x,n,a,y;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>n;
        cin>>x;
         cin>>y;
       for(int j=1;j<n;j++)
       {
           if((j%x==0)&&(j%y!=0))
           {
               cout<<j<<" ";
           }
       }
       cout<<endl;
    }
}
