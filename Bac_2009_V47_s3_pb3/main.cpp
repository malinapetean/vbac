#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac3.txt");

int div(int n,int k)
{
    while(n!=1)
    {
        if(n%k==0)
            n/=k;
        else
            return 0;
    }
    return 1;
}

int main()
{
    int n,nr,k;
    fin>>n;
    cin>>k;
    while(fin>>nr)
    {
        if(div(nr,k)==1)
            cout<<nr<<" ";

    }

    return 0;
}
