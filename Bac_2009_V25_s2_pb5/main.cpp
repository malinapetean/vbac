#include <iostream>

using namespace std;
int produs(int m, int a[100][100],int col)
{
    int p=1;
    for(int i=1;i<=m;i++)
    {
        p*=a[i][col];
    }
    return p;
}
int main()
{
    int m,n,a[100][100],maxim=0,coloanaMaxima,f[100];
    cin>>m;
    cin>>n;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    }
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
            cout<<a[i][j]<< " ";
        cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        f[i]=produs(m,a,i);
        if(produs(m,a,i)>maxim)
            maxim=produs(m,a,i);
    }
    for(int i=1;i<=n;i++)
    {
        if(f[i]==maxim)
            cout<<i<< " ";
    }

    return 0;
}
