#include <iostream>

using namespace std;

int multiplu(int a[100],int n,int k)
{
    int ct=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%k==0 && a[i]%10==k)
            ct++;
    }
    return ct;
}
int main()
{
    int a[100],n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<multiplu(a,n,k);
    return 0;
}
