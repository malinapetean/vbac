#include <iostream>

using namespace std;

int main()
{
    int n,ct=0,aux,a[8][8];
    cin>>n;
    aux=n;
    while(n!=0)
    {
        n/=10;
        ct++;
    }
    cout<<ct<<endl;
    while(aux!=0)
    {
        for(int i=1;i<=ct;i++)
        {
            for(int j=1;j<=ct;j++)
                a[j][i]=aux%10;
            aux/=10;
        }
    }
    for(int i=1;i<=ct;i++)
    {
        for(int j=1;j<=ct;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
