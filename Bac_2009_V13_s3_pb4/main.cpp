#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.in");
ofstream fout("bac.out");

int nr(int &n,int cifra)
{
    int aux=0,p=1;
    while(n!=0)
    {
        if(n%10!=cifra)
        {
            aux=n%10*p+aux;
            p*=10;
        }
        n/=10;
    }
    n=aux;
}

int main()
{
    int n;
    while(fin>>n)
    {
        for(int i=1;i<=9;i=i+2)
        {
            nr(n,i);
        }
        if(n!=0)
            fout<<n<<" ";
    }
    return 0;
}
