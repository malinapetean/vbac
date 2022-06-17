#include <iostream>

using namespace std;

int cif(int a,int b)
{
    int ct=0;
    while(a!=0)
    {
        if(b==a%10)
            ct++;
        a/=10;
    }
    return ct;
}

int main()
{
    /*int a,b;
    cin>>a>>b;
    cout<<cif(a,b);*/

    int n,f[10];
    cin>>n;
    for(int i=0;i<=9;i++)
    {
        f[i]=0;
    }
    while(n!=0)
    {
        if(f[n%10]==0)
        {
            f[n%10]=cif(n,n%10);
        }
        n/=10;
    }
    int ok=0;
    for(int i=0;i<10 && ok==0;i++)y
    {
        if(f[i]%2!=0)
        {
            ok=1;
        }
    }
    return 0;
}
