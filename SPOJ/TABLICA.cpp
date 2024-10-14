#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a=0,b,c,d;
    vector <int> tab;
    while(cin>>a)
    {
        tab.push_back(a);
    }
    b=tab.size();
    for(int i=0; i<tab.size(); i++)
    {
        cout << tab[b-1-i] << endl;
    }
    return 0;
}
