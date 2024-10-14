#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int tab[10];
   int b,i=0;
    string a;
    while(cin>>a)
    {
        if(a=="+")
        {
            cin>>b;
            if(i<10)
            {
            tab[i]=b;
            i++;
            cout<<":)"<<endl;
            }
            else
            {
            cout<<":("<<endl;
            }
        }
        if(a=="-")
        {
            if(i>0)
            {
                cout<<tab[i-1]<<endl;
                i--;
            }
             else
            {
            cout<<":("<<endl;
            }
        }
    }
    
    return 0;
}
