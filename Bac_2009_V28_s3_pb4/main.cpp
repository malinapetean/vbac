#include <iostream>
#include <fstream>

using namespace std;

int primul (int a)
{
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
            return i;
    }
}
int nrprim(int a)
{
    if(a==0 || a==1)
        return 0;
    else{
        for(int i=2;i<a;i++)
            if(a%i==0)
                return 0;
    }
}
ifstream fin ("numere.in");
int main()
{
    int n,a,v[100],ct=0;
    fin>>n;
    for(int i=0;i<n;i++)
    {
        fin>>a;
        if(nrprim(a/primul(a)))
        {
            v[ct]=a;
            ct++;
        }
    }
    for(int i=0;i<ct;i++)
        cout<<v[i]<<" ";
    int maxim=0;
    for(int i=0;i<ct;i++)
    {
        if(maxim<v[i])
            maxim=v[i];
    }

    if(ct!=0)
        cout<<"\nDa"<<" "<<maxim;
    return 0;
}
