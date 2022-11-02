#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("bac.txt");
int main()
{
    int n,nr,f[10000];
    fin>>n;
    for(int i=0;i<10000;i++)
    {
        f[i]=0;
    }
    while(fin>>nr)
    {
        f[nr]++;
    }
    for(int i=0;i<10000;i++)
        if(f[i]>=2)
            cout<<i<<" ";
    return 0;
}
