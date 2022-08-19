#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("numere.in");

int main()
{
    float x;
    int n, a[100];
    fin>>n;
    for(int i=0;i<n;i++)
    {
        fin>>x;
        a[i]=x;
    }
    float minim= a[n-1]-a[n-2];
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]-a[i-1]<minim)
            minim=a[i]-a[i-1];
    }
    cout<<minim;
    return 0;
}
