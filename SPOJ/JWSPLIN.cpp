#include <iostream>
using namespace std;
int main()
{
    int a,x1,x2,x3,y1,y2,y3;
    cin>>a;
    for(int i=0;i<a;i++)
   {
       cin>>x1;
       cin>>y1;
       cin>>x2;
       cin>>y2;
       cin>>x3;
       cin>>y3;
       if((x1==x2&&x2==x3)||(y1==y2&&y2==y3))
       {
           cout<<"TAK"<<endl;
       }
       else if(((x1-y1)==(x2-y2))&&((x3-y3)==(x2-y2)))
       {
             cout<<"TAK"<<endl;
       }
       else 
       {
             cout<<"NIE"<<endl;
       }
   }
    return 0;
}
