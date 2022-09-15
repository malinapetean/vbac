#include <iostream>

using namespace std;

int main()
{
    int n,A[15][15];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0|| j==0)
                A[i][j]=1;
            else
                A[i][j]=A[i][j-1]+A[i-1][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
