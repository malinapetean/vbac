#include <iostream>

using namespace std;
int minimColoana(int n,int coloana,int a[31][31])
{
    int minim=9999;
    for(int i=0;i<n;i++)
    {
        if(a[i][coloana]<minim)
            minim=a[i][coloana];
    }
    return minim;
}
int main()
{
    int n,m,a[31][31];
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    for(int i=m-1;i>=0;i--)
        cout<<minimColoana(n,i,a)<<" ";

    return 0;
}
