#include <iostream>
#include <fstream>

using namespace std;
void sortare(int v[1000],int n)
{
    int sch=0;
    while(sch==0)
    {
        sch=1;
        for(int i=0;i<n-1;i++)
        {
            if(v[i]>v[i+1])
            {
                int aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                sch=0;
            }
        }
    }
}
ifstream fin("numere.txt");
int main()
{
    int n,v[1000],ct=0;
    while(fin>>n)
    {
        if(n%2==0)
        {
            v[ct++]=n;
        }
    }
    sortare(v,ct);
    for(int i=0;i<ct;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
