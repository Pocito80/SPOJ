#include <iostream>
using namespace std;

int main()
{
   int n,l,x;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>x;
       l=0;
       while(x!=1)
       {
           if(x%2==0)
           {
               x=x/2;
               l++;
           }
           else
           {
               x=x*3+1;
               l++;
           }
       }
       cout<<l<<endl;
   }
}
