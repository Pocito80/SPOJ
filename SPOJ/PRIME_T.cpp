
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n=0,l,h;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>l;
        h=0;
        
        for(int j=1;j<=sqrt(l);j++)
        {
        if(l%j==0)
        {
          h++;
        }
        }
        if(h>=2||l==1)
        {
            cout<<"NIE"<<endl;
        }
        else
        {
        cout<<"TAK"<<endl;
        }
    }
    
}
