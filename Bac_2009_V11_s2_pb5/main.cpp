#include <iostream>

using namespace std;
int minimLinie(int M[10][10],int linie,int n)
{
    int minim=9999;
    for(int i=0;i<n;i++)
    {
        if(M[linie][i]<minim)
            minim=M[linie][i];
    }
    return minim;
}

int main()
{
    int n,m,M[10][10],v[10];
    cin>>m>>n;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>M[i][j];
    for(int i=0;i<m;i++)
    {
        v[i]=minimLinie(M,i,n);
    }

    int maxim=0;
    for(int i=0;i<m;i++)
    {
        if(v[i]>maxim)
            maxim=v[i];
    }
    cout<<maxim;
    return 0;
}
