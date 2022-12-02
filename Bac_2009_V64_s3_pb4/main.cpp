#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("date.in");

int main()
{
    int n,v[1000],ct=0,lgmax=0,aux[1000];
    while(fin>>n)
    {
        v[ct++]=n;
    }
    for(int i=0;i<ct-1;i++)
    {
        int k=0,secventa[1000]{};
        while(v[i]>v[i+1] && i<ct)
        {
            secventa[k++]=v[i];
            i++;
        }
        if(i<ct)
            secventa[k++]=v[i];
        if(lgmax<k)
        {
            lgmax=k;

            for(int i=0;i<lgmax;i++)
            {
                aux[i]=secventa[i];
            }
        }
    }
    cout<<lgmax<<endl;
    for(int i=0;i<lgmax;i++)
    {
        cout<<aux[i]<<" ";
    }
    return 0;
}
