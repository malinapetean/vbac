#include <iostream>
#include <cmath>

using namespace std;
int dist(int a[100],int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1] || a[i]-a[i+1]==1)
            return 0;
    }
    return 1;
}
int main()
{
    int a[100],n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<dist(a,n);
    return 0;
}
