#include <iostream>
#include <fstream>

using namespace std;
ifstream fin ("numere.in");
int main()
{
    int n,f[10]={},ct=0;
    double x[100];
    fin>>n;
    for(int i=0;i<n;i++)
    {
        fin>>x[i];
        if(x[i]>=(int)(x[i]))
            f[(int)x[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<x[i]<< " ";
    }
    cout<<endl;
    for(int i=0;i<10;i++)
        if(f[i]!=0)
            ct++;
    cout<<ct;
    return 0;
}
