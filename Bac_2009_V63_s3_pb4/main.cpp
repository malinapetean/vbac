#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("date.in");

int main()
{
    int n,prim,doi,ct=0;
    fin>>prim;
    fin>>doi;
    while(fin>>n)
    {
        if(doi<=(prim+n)/2)
        {
            ct++;
            cout<<doi<<" ";
        }
        prim=doi;
        doi=n;
    }
    cout<<ct;
    return 0;
}
