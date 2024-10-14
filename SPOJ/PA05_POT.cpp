#include <iostream>
using namespace std;

int main()
{
    int n=0,a,b;
    cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>a;
       cin>>b;
       a=a%10;
       if(a==1)
       {
       cout<<1<<endl;
       }
       else if(a==2)
       {
           b=b%4;
           if(b==1)
           {
            cout<<2<<endl;
           }
            else if(b==2)
           {
            cout<<4<<endl;
           }
            else if(b==3)
           {
            cout<<8<<endl;
           }
             else if(b==0)
           {
            cout<<6<<endl;
           }
       }
         else if(a==3)
       {
           b=b%4;
           if(b==1)
           {
            cout<<3<<endl;
           }
            else if(b==2)
           {
            cout<<9<<endl;
           }
            else if(b==3)
           {
            cout<<7<<endl;
           }
             else if(b==0)
           {
            cout<<1<<endl;
           }
       }
         else if(a==4)
       {
           b=b%2;
           if(b==1)
           {
            cout<<4<<endl;
           }
            else if(b==0)
           {
            cout<<6<<endl;
           }
          
       }
        else if(a==5)
       {
       cout<<5<<endl;
       }
       else if(a==6)
       {
       cout<<6<<endl;
       }
        else if(a==7)
       {
           b=b%4;
           if(b==1)
           {
            cout<<7<<endl;
           }
            else if(b==2)
           {
            cout<<9<<endl;
           }
            else if(b==3)
           {
            cout<<3<<endl;
           }
             else if(b==0)
           {
            cout<<1<<endl;
           }
       }
        else if(a==8)
       {
           b=b%4;
           if(b==1)
           {
            cout<<8<<endl;
           }
            else if(b==2)
           {
            cout<<4<<endl;
           }
            else if(b==3)
           {
            cout<<2<<endl;
           }
             else if(b==0)
           {
            cout<<6<<endl;
           }
       }
        else if(a==9)
       {
           b=b%2;
           if(b==1)
           {
            cout<<9<<endl;
           }
            else if(b==0)
           {
            cout<<1<<endl;
           }
          
       }
       else
       {
           cout<<0<<endl;
       }
   }
    
}
