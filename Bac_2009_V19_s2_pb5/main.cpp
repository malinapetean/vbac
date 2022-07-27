#include <iostream>

using namespace std;

int main()
{
    int n, a[20][20];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            if(i%2==0)
                if (j == 1)
                    a[i][j]=a[i-1][j];
                else
                    a[i][j]=a[i-1][j-1];
            else
                a[i][j]=i+j;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
