#include <iostream>

using namespace std;

int main()
{
    int n,a[50][50],aux;
    cin>>n;
    aux=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i+j==n+1)
                a[i][j]=0;
            else
            {
                a[i][j]=aux;

            }

        }
        aux--;
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
