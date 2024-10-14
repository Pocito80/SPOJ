#include <iostream>
using namespace std;

int
main ()
{
    int x,n = 1,a=0;
   do
   {
       cin>>x;
       cout<<x<<endl;
       if(x==42)
       {
           if(n==0)
           {
               a++;
           }
           n=1;
       }
       else
       {
           n=0;
       }
   }
   while(a!=3);
}
