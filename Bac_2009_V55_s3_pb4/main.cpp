#include <iostream>

using namespace std;
int lg(int n)
{
    int ct=0,p=1;
    while(n)
    {
        ct++;
        n/=10;
    }
    while(ct)
    {
        p=p*10;
        ct--;
    }
    return p;
}
int main()
{
    int n,a[100],b[100],c[100];
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        cin>>b[i];
    for(int i=1;i<=n;i++)
    {
        if(a[i]<b[i])
        {

            c[i]=a[i]*lg(b[i])+b[i];
        }
        else
        {
            c[i]=b[i]*lg(a[i])+a[i];
        }
    }
    for(int i=1;i<=n;i++)
        cout<<c[i]<<" ";
    return 0;
}
