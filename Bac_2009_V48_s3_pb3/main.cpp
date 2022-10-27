#include <iostream>

using namespace std;

int cmdiv(int x,int y)
{
    while(x!=y)
    {
        if(x>y)
            x-=y;
        if(x<y)
            y-=x;

    }
    return x;
}
int main()
{
    int n,ct=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(cmdiv(i,n)==1)
        {
            cout<<i<<" "<<n<<endl;
            ct++;
        }
    }
    cout<<ct;
    return 0;
}
