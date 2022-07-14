#include <iostream>

using namespace std;

int main()
{
    int n,nr,f[10];
    cin>>n;
    for(int i=0;i<10;i++)
        f[i]=0;
    for(int i=0;i<n;i++)
    {
        cin>>nr;
        f[nr]++;
    }
    for(int i=0;i<10;i++)
    {
        while(f[i]>0)
        {
            cout<<i<<" ";
            f[i]--;
        }
    }
    return 0;
}
