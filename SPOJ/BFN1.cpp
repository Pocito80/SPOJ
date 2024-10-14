#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// string odwracanie(string liczba)
// {
//     int dlugosc;
//     int i=0;
//     string liczba2;
//     dlugosc  = liczba.length();
//     int t=dlugosc-1;
//     for(i;i<dlugosc;i++)
//     {
//     liczba2[0]=liczba[1];
//     cout<<liczba2;
//     }
//     return liczba2;
// }
int main()
{
   int a,dodawania=0;
   string liczba,liczba2;
   int liczbaint,liczba2int;
   cin>>a;
   for (int i=0;i<a;i++)
   {
       cin>>liczba;
       liczba2=liczba;
       reverse(liczba2.begin(), liczba2.end());
    
    if(liczba2!=liczba)
    {
        dodawania=0;
        for(int i=0;liczba2!=liczba;i++)
        {
            dodawania++;
            liczbaint=stoi(liczba);
            liczba2int=stoi(liczba2);
            liczbaint=liczbaint+liczba2int;
            liczba=to_string(liczbaint);
            liczba2=liczba;
            reverse(liczba2.begin(), liczba2.end());
        }
        cout<<liczba<<" "<<dodawania<<endl;
    }
    else if(liczba==liczba2)
    {
    cout<<liczba<<" "<<0<<endl;
    }
   }
    return 0;
}