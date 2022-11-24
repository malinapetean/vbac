#include <iostream>

using namespace std;

int main()
{
    int n,m,a[25][25],k=1;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            for(int j=1;j<=m;j++)
            {
                a[i][j]=k;
                k++;

            }
        }
        else
        {
           for(int j=m;j>=1;j--)
            {
                a[i][j]=k;
                k++;

            }

        }

    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
