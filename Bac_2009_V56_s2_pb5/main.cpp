#include <iostream>

using namespace std;

int main()
{
    int n,k,m[25][25];
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i<=k && j<=k)
                m[i][j]=1;
            else if(i<=k && j>k)
            {
                m[i][j]=2;
            }
            else if(i>k && j<=k)
            {
                m[i][j]=3;
            }
            else if(i>k && j>k)
                m[i][j]=4;

        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
