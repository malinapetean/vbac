#include <iostream>

using namespace std;

int main()
{
    int n,m,x,a[25][25];
    cin>>m>>n>>x;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i>=x)
            {
                a[i][j]=a[i+1][j];
            }
        }
    }
    m--;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
