#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("nr.txt");


int main()
{
    int nr,v[101],i=0,ct=0;
    while(fin>>nr)
    {
        if(nr>0)
        {
            v[i]=nr;
            i++;
            ct++;
        }
    }
    int sch=0;
    while(sch==0)
    {
        sch=1;
        for(int j=0;j<ct-1;j++)
            if(v[j]>v[j+1])
            {
                int aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
                sch=0;
            }
    }
    for(int j=0;j<ct;i++)
        cout<<v[i]<<" ";
    return 0;
}
