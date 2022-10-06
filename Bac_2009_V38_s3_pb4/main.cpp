#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("bac.in");
void inter(int &x, int&y)
{
    int aux=x;
    x=y;
    y=aux;
}
int main()
{
    int n,a[100];
    fin>>n;
    for(int i=0;i<n;i++)
        fin>>a[i];
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(a[i]>a[j])
                inter(a[i],a[j]);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
