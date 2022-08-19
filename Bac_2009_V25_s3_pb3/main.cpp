#include <iostream>

using namespace std;

void f(int n, int a[100], int &k)
{
    k=0;
    int ct=0;
    for (int i=n-1;i>=0;i--)
        if (a[i]%2==0)
        {
            k=k*10+a[i];
            ct++;
        }
    if (ct==0)
        k=-1;
}
int main()
{
    int n, a[100],k;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    f(n,a,k);
    cout<<k;
    return 0;
}
