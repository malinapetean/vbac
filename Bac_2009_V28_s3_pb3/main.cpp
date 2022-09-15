#include <iostream>

using namespace std;

int main()
{
    int n,a,v[50],s=0,m,ct=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v[i]=a;
        s+=a;
    }
    m=(s-v[n-1])/(n-1);
    for(int i=0;i<n-1;i++)
    {
         if(v[i]==m)
            ct++;
    }
    cout<<ct;
    return 0;
}
