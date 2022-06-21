#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("numere.txt");
int main()
{
    int n,nr,maxim;
    fin>>n>>maxim;
    cout<<maxim<<" ";
    for(int i=1;i<n;i++)
    {
        fin>>nr;
        if(nr>maxim)
            maxim=nr;
        cout<<maxim<<" ";
    }
    return 0;
}
