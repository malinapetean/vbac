#include <iostream>

using namespace std;

int main()
{
    int n,m,a[50][50],p=1,ok=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(i%2==0 && j%2==1 && a[i][j]>0)
            {
                 p*=a[i][j];
                 ok=1;
            }
        }
    }
    if(ok==0)
        cout<<"NU EXISTA";
    else
        cout<<p%10;
    return 0;
}
