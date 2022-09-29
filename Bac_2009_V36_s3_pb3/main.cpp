#include <iostream>
#include <fstream>

using namespace std;

int cifra(int a)
{
    if(a==0)
        return 0;
    while(a!=0)
    {
        int cif=a%10;
        if(cif%2==0)
            return cif;
        a/=10;
    }
    return -1;
}
void sortare(int n,int a[15000])
{
    int sch=0;
    while(sch==0)
    {
        sch=1;
        for(int i=0;i<n;i++)
            if(a[i]<a[i+1])
            {
                int aux=a[i];
                a[i]=a[i+1];
                a[i+1]=aux;
                sch=0;
            }
    }
}
int main()
{
    ifstream fin("bac.in");
    int n,a[15000],nr,ct=0;
    fin>>n;
    while(fin>>nr){
        if(cifra(nr)!=-1)
            a[ct++]=cifra(nr);
    }
    sortare(n,a);
    int nou=0;
    for(int i=0;i<ct;i++)
    {
        nou=10*nou+a[i];
    }
    cout<<nou;
    return 0;
}
