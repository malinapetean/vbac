#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.in");

int main()
{
    int n,first=0,second=0;
    while(fin>>n)
    {
        if(n%2==1)
        {
            second=first;
            first=n;

        }
    }
    if(first==0 || second==0)
        cout<<"Numere insuficiente";
    else
        cout<<second<<" "<<first;
    return 0;
}
