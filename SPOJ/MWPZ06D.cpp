#include <iostream>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a;
        cin>>b;
        if(a>1)
        {
        if(b%(a-1)!=0)
        {
            cout<<"TAK"<<endl;
        }
        else
        {
             cout<<"NIE"<<endl;
        }
        }
        else if(a==1&&a<=b)
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
