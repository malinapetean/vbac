#include <iostream>

using namespace std;
int prim(int x)
{
    if(x==0 || x==1)
        return 0;
    else
        for(int i=2;i<x;i++)
            if(x%i==0)
                return 0;
    return 1;
}
void numar(int x,int &nrp)
{
    nrp=0;
    for(int i=2;i<x;i++)
    {
        if(prim(i)==1)
            nrp++;
    }
}
int main()
{
    int a,b,nrp1,nrp2;
    cin>>a>>b;
    numar(b+1,nrp1);
    numar(a,nrp2);
    if(nrp1-nrp2>=1)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
