#include <iostream>

using namespace std;

int main()
{
    int n,x,a[100][100];
    cin>>n>>x;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j)
                a[i][j]=x/100;
            else
                if(i+j==n+1)
                    a[i][j]=x%10;
            else
                a[i][j]=x/10%10;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
