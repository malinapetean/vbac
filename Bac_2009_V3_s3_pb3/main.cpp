#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("nr.txt");

int main()
{
    int v[100],ct=0,k;
    while(fin>>k)
    {
        if(k>99)
        {
            v[ct]=k;
            ct++;
        }
    }
    int sch=1;
    while(sch)
    {
        sch=0;
        for(int i=0;i<ct-1;i++)
        {
            if(v[i]>v[i+1])
            {
                int aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                sch=1;
            }
        }
    }
    if(ct==0)
        cout<<"NU EXISTA";
    for(int i=0;i<ct;i++)
        cout<<v[i]<<" ";
    return 0;
}
