#include <iostream>

using namespace std;
int cmmdc(int a,int b)
{
    if(a==b)
        return a;
    while(a!=b)
    {
        if(a>=b)
            a-=b;
        else
            b-=a;

    }
    return a;
}

int main()
{
    cout<<cmmdc(14,21);
    int n,ct=0;
    int a,b;
    cin>>n;

    for(int a=2;a<=n;a++)
    {
        for(int b=a+1;b<=n;b++)
        {
            if(cmmdc(a,b)==1)
            {
                cout<<a<<" "<<b<<endl;
                ct++;
            }
        }
    }
    cout<<ct;
    return 0;
}
