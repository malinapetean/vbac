#include <iostream>

using namespace std;

int prim(int a)
{
    if(a==0 || a==1)
        return 0;
    else
    {
        for(int i=2;i<a;i++)
        {
            if(a%i==0)
            {
                return 0;
            }
        }
    }
    return 1;
}
int calcul(int n,long a[10000])
{
    int ct=0;
    for(int i=0;i<n;i++)
    {
        if(prim(a[i])==1)
            ct++;
    }
    return ct;
}
int main()
{
    int n;
    long a[10000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<calcul(n,a);
    return 0;
}
