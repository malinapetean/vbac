#include <iostream>

using namespace std;
int a[20][20],n;
int main()
{

    cin>>n;
    for(int i=1;i<=n;i++)
    {
        a[1][i]=1+i;
        a[i][1]=1+i;
        a[n][i]=n+i;
        a[i][n]=n+i;
    }
    for(int i=2;i<n;i++)
        for(int j=2;j<n;j++)
            a[i][j]=a[i-1][j-1]+a[i-1][j]+a[i-1][j+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
           cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
