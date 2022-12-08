#include <iostream>
#include <fstream>

using namespace std;
ifstream fin ("numere.txt");
int main()
{
    int n,ctimp=0,v[10000];
    fin>>n;
    while(fin>>n)
    {
        if(n%2==0)
            cout<<n<<" ";
        else
            v[ctimp++]=n;
    }
    for(int i=ctimp-1;i>=0;i--)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
