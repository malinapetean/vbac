#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("bac.in");
int minimcol(int n, int a[30][30],int col)
{
    int minim=999;
    for(int i=0;i<n;i++)
    {
        if(a[i][col]<minim)
            minim=a[i][col];
    }
    return minim;
}
int main()
{
    int n,a[30][30];
    fin>>n;
    int p=1,ok=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

             fin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j==n-1 && minimcol(n,a,j)==a[i][j])
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
