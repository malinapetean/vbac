#include <iostream>

using namespace std;

int interval(int a[100],int n)
{
    int ct=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=a[0] && a[i]>=a[n-1])
            ct++;
    }
    return ct;

}
int main()
{
    int n,a[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<interval(a,n);
    return 0;
}
