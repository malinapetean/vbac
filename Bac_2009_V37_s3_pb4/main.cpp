#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("bac.in");

int nrdiv(int x)
{
    int ct=0;
    for(int i=2;i<=x;i++)
    {
        if(x%i==0)
        {
            ct++;
            while(x%i==0)
            {
                x/=i;
            }
        }
    }
    return ct;
}
int main()
{
    int n, nr,val=0;
    fin>>n;
    while(fin>>nr)
    {
        if(nrdiv(nr)%2==0)
        {
            if(val==0)
                cout<<nr<<" ";
            val=nr;
        }
    }
    cout<<nr;
    return 0;
}
