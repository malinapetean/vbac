#include <iostream>

using namespace std;

int main()
{
    int n,a[25][25];
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(i==j)
                a[i][j]=0;
            else
                a[i][j]=n-j;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
