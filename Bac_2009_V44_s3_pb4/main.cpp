#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("numere.txt");
    int n,nr,f[10];
    for(int i=0;i<10;i++)
        f[i]=0;
    fin>>n;
    while(fin>>nr)
    {
        while(nr)
        {
            int c=nr%10;
            f[c]++;
            nr/=10;
        }
    }
    for(int i=0;i<10;i++)
        if(f[i]!=0)
            cout<<i<<" ";
    return 0;
}
