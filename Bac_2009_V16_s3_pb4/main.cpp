#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("numere.txt");

int main()
{
    int nr,f[10];
    for(int i=0;i<10;i++)
        f[i]=0;
    while(fin>>nr)
    {
        while(nr!=0)
        {
            f[nr%10]++;
            nr/=10;
        }
    }
    for(int i=9;i>0;i--)
    {
        while(f[i]!=0)
        {
            cout<<i;
            f[i]--;
        }
    }
    return 0;
}
