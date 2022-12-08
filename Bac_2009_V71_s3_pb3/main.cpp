#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("numere.in");
ofstream fout("numere.out");

int palindrom(int n)
{
    int aux=n;
    int nou=0;
    while(aux!=0)
    {
        nou=nou*10+aux%10;
        aux/=10;
    }
    if(nou==n)
        return 1;
    else
        return 0;
}

int main()
{
    int n,maxim=0,aparitii=0;
    while(fin>>n)
    {
        if(palindrom(n)==1)
        {
            if(maxim<n)
            {
                maxim=n;
                aparitii=0;

            }
            if(maxim==n)
            {
                aparitii++;
            }

        }
    }
    fout<<maxim<<endl;
    fout<<aparitii;
    return 0;
}
