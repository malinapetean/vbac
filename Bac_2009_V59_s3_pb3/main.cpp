#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("bac.txt");
int main()
{
    int f[10000],n,ct=0,p=1;
    for(int i=0;i<10000;i++)
        f[i]=0;
    while(fin>>n)
    {
        f[n]++;
    }
    for(int i=9999;i>=0;i--)
    {
        if(f[i]!=0 && ct!=3)
        {
            p=p*i;
            ct++;
        }
    }
    cout<<p%10;
    return 0;
}
