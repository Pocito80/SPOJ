
#include <iostream>

using namespace std;

int main() {
    int a,b,kierunek,ns,ew,kroki;
 cin>>a;
 for(int i=0;i<a;i++)
 {
     ns=0;
     ew=0;
     cin>>b;
     for(int j=0;j<b;j++)
     {
         cin>>kierunek;
         cin>>kroki;
         if(kierunek==0)
         {
             ns=ns+kroki;
         }
          else if(kierunek==1)
         {
               ns=ns-kroki;
         }
          else if(kierunek==2)
         {
               ew=ew+kroki;
         }
         else if(kierunek==3)
         {
               ew=ew-kroki;
         }
     }
     if(ns>0)
     {
         cout<<0<<" "<<ns<<endl;
     }
     else if(ns<0)
     {
          cout<<1<<" "<<(ns*(-1))<<endl;
     }
     if(ew>0)
     {
         cout<<2<<" "<<ew<<endl;
     }
     else if(ew<0)
     {
          cout<<3<<" "<<(ew*(-1))<<endl;
     }
   else if(ew==0&&ns==0)
   {
       cout<<"studnia"<<endl;
   }
 }
}
