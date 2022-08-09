#include <iostream>

using namespace std;

int main()
{
    int n,m,a[10][10];
    cin>>m;
    cin>>n;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1)
                a[i][j]=j;
            else
                if(j==1)
                    a[i][j]=i;
                else
                    a[i][j]=a[i-1][j]+a[i][j-1];

        }
    }
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<a[i][j]<< " ";
        }
        cout<<endl;
    }
    return 0;
}
