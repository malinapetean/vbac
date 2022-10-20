#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("numere.txt");

int main()
{
    int n,f[10]={},numar=0;
    fin>>n;
    while(fin>>n)
    {
        f[n]++;
    }
    for(int i=9;i>=0;i--)
        if(f[i]!=0)
        {
            while(f[i])
            {
                numar=numar*10+i;
                f[i]--;
            }
        }
     cout<<numar;
    return 0;
}
