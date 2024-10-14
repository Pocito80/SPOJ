#include <iostream>
#include <string>
using namespace std;

int main()
{
   long t,b,l;
   cin>>t;
   for(int i=0;i<t;i++)
   {
   cin>>b;
   l=b/10000000000+b%10000000000/1000000000*3+b%1000000000/100000000*7+b%100000000/10000000*9+b%10000000/1000000+b%1000000/100000*3+b%100000/10000*7+b%10000/1000*9+b%1000/100+b%100/10*3+b%10;
   if(l%10==0)
   {
       cout<<"D"<<endl;
   }
   else
     {
       cout<<"N"<<endl;
   }
    
   }
   return 0;
}

