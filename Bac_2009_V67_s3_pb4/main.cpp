#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("numere.txt");
int main()
{
    int n,a,b;
    fin>>n;
    fin>>a;
    cout<<a<<" ";
    b=a;
    for(int i=1;i<=n;i++)
    {
        fin>>a;
        if(a!=b)
            cout<<a<<" ";
        b=a;
    }
    return 0;
}
