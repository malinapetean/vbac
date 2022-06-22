#include <iostream>

using namespace std;

int sum(int x)
{
    int s=0;
    for(int i=1;i<=x;i++)
        if(x%i==0)
            s+=i;
    return s;
}
int main()
{
    int n,nr,ct=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>nr;
        if(nr==(sum(nr)-1))
            ct++;
    }
    cout<<ct;

    return 0;
}
