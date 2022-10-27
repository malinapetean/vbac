#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.in");
void sortare(int v[100],int n)
{
    int sch=0;
    while(sch==0)
    {
        sch=1;
        for(int i=0;i<n;i++)
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
int cautare(int v[100],int n,int nr)
{
    for(int i=0;i<n;i++)
    {
        if(v[i]==n)
            return i;
    }
    return -1;
}
int main()
{
    int n,nr,v[100],ct=0;
    fin>>n;
    while(fin>>nr)
    {
        if(cautare(v,ct,nr)==-1)
        {
             v[ct++]=nr;
        }
        else
        {
            v[cautare(v,ct,nr)]=-1;
        }
    }
    sortare(v,n);
    for(int i=0;i<n;i++)
    {
        if(v[i]!=-1)
        {
            cout<<v[i]<<" ";
        }
    }


    return 0;
}
