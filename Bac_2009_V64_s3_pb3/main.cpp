#include <iostream>

using namespace std;
int diviz(int n,int a[100])
{
    int ct=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(a[i]%a[j]==0 || a[j]%a[i]==0)
            {
                ct++;
            }

        }
    }
    return ct;
}
int main()
{
    int n;
    cin>>n;
    int a[100];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cout<<diviz(n,a);
    return 0;
}
