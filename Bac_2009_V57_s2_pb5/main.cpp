#include <iostream>

using namespace std;

int main()
{
    int n,a,b,m[25][25];
    cin>>n>>a>>b;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==a || j==b)
            {
                m[i][j]=0;
            }
            else if(i<a &&j<b)
            {
                m[i][j]=1;
            }
            else if(i<a && j>b)
            {
                m[i][j]=2;
            }
            else if(i>a &&j<b)
            {
                m[i][j]=3;
            }
            else if(i>a && j>b)
            {
                m[i][j]=4;
            }
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
