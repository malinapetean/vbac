#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("numere.txt");
int maxim(int x[101],int n)
{
    int maxim=-9999;
    for(int i=0;i<n;i++)
        if(x[i]>maxim)
            maxim=x[i];
    return maxim;
}
bool progresieAritmetica(int a[101][101],int n,int linia)
{
    int ok=0;
    for(int i=1;i<n-1;i++)
    {
        if((a[linia][i-1]+a[linia][i+1])/2==a[linia][i])
            ok=1;
        else
            return false;
    }
    return true;
}
int main()
{
    int n,x[101][101];
    fin>>n;
    int maxi=-9999;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            fin>>x[i][j];
    for(int i=0;i<n;i++)
        if(progresieAritmetica(x,n,i))
            if(maxim(x[i],n)>maxi)
                maxi=maxim(x[i],n);
    cout<<maxi;


    return 0;
}
