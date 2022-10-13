#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("numere.txt");
int main()
{
    int n,f[100]={};
    fin>>n;
    while(fin>>n)
    {
        f[n]++;
    }
    for(int i=0;i<100;i++)
    {
        if(f[i]==1)
            cout<<i<<" ";
    }
    return 0;
}
