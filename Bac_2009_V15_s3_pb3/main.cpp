#include <iostream>

using namespace std;

int nrDivizori(int n)
{
    int ct=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            ct++;
    }
    return ct;
}

int main()
{
    int n,maxim=0,val;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        if(nrDivizori(i)>=maxim)
        {
            maxim=nrDivizori(i);
            val=i;
        }
    }
    cout<<val<<" ";
    return 0;
}
