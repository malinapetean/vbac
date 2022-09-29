#include <iostream>

using namespace std;
int minimColoana(int n,int a[51][51],int colo)
{
    int minim=999999;
    for(int i=0;i<n;i++)
    {
        if(a[i][colo]<minim)
            minim=a[i][colo];
    }
    return minim;
}


int main()
{
    int n,a[51][51];
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    for(int j=0;j<n;j++)
    {
        cout<<minimColoana(n,a,j)<< " ";
    }
    return 0;
}
