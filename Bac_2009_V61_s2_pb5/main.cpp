#include <iostream>

using namespace std;

int main()
{
    int m[15][15],n;
    cin>>n;
    for(int i=n;i>0;i--)
    {
        for(int j=1;j<=n;j++)
        {

            if(i==n)
                m[i][j]=j;
            else if(i<j )
                m[i][j]=0;
            else
            {
                m[i][j]=m[i+1][j-1]+m[i+1][j]+m[i+1][j+1];
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
