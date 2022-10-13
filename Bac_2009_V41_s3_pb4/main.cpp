#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("numere.txt");
int main()
{
    int n,f[10]={},maxim=0,val=0;
    fin>>n;
    while(fin>>n)
    {
        f[n]++;
    }
    for(int i=0;i<10;i++)
        if(i>maxim && f[i]!=0 )
        {
            maxim=i;
            val=f[i];
        }
    cout<<maxim<<" "<<val;

    return 0;
}
