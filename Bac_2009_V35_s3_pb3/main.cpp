#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("numere.in");


int verificareprimaUltima(int n)
{
    int aux=n,cp;
    int cu=aux%10;
    while(aux!=0)
    {
        cp=aux%10;
        aux/=10;
    }
    if(cp==cu)
        return 1;
    else
        return 0;
}
int main()
{
    int n,nr;
    fin>>n;
    while(fin>>nr)
    {
        if(verificareprimaUltima(nr))
            cout<<nr<<" ";
    }
    return 0;
}
