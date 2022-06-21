#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("produse.txt");

int f[1000];

int main()
{
    int tip,kg,pret;
    for(int i=1;i<=1000;i++)
    {
        fin>>tip;
        fin>>kg;
        fin>>pret;
        f[tip]=kg*pret;

    }
    for(int i=1;i<=1000;i++)
    {
        if(f[i]!=0)
            cout<<i<<" "<<f[i]<<endl;

    }

    return 0;
}
