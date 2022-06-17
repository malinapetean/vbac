#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    int n, v[100],i,par=0,impar=0,ok=0;
    ofstream fout ("bac.txt");
    cin>>n;
    for(i=1;i<=3*n;i++)
    {
        cin>>v[i];
    }
    i=1;
    while(i<=n && !ok)
    {
        if(v[i]%2==0)
        {
            ok=1;
            par=i;
        }
        i++;
    }
    i=3*n;
    ok=0;
    while(i>=2*n+1 && !ok)
    {
        if(v[i]%2==1)
        {
            ok=1;
            impar=i;
        }
        i--;
    }
    if (par!=0 && impar!=0)
    {
        int aux = v[par];
        v[par] = v[impar];
        v[impar] = aux;
    }
    for(int i=1;i<=n*3;i++)
        fout<<v[i]<<" ";
    return 0;
}
