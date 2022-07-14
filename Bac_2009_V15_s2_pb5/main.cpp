#include <iostream>

using namespace std;
int n,a[6][6];

int main()
{
    cin>>n;
    while(n!=0)
    {
        for(int i=1;i<=6;i++)
        {
            for(int j=i+1;j<=6;j++)
            {
                a[i][j]=n%10;
                a[j][i]=n%10;
            }
            n/=10;
        }
    }
    for(int i=1;i<=6;i++)
    {
        for(int j=1;j<=6;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
