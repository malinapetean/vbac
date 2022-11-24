#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("date.in");
int main()
{
    int n,x,y,ct=0;
    fin>>x;
    fin>>y;
    while(fin>>n)
    {
        if(y>x && y>n)
            ct++;
        x=y;
        y=n;
    }
    cout<<ct;
    return 0;
}
