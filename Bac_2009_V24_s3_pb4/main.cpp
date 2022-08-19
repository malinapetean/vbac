#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int main()
{
    int n,a,b,v[30000];
    fin>>n;
    for(int i=0;i<n;i++)
        fin>>v[i];
    fin>>a>>b;
    int ok=0,i=0;
    while(ok==0)
    {
        if(v[i]>a && v[i]<b)
        {
            ok=1;
            cout<<v[i];
        }
        i++;
    }

    return 0;
}
