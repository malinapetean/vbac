#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

void cmax(int a,int&b)
{
    int maxim=0;
    while(a)
    {
        int c=a%10;
        if(c>maxim)
            maxim=c;
        a/=10;
    }
    b=maxim;
}

int main()
{
    int n,c,minim=30000,cifmax=0,v[1000],ct=0;
    while(fin>>n)
    {
        c=0;
        cmax(n,c);
        if(c>cifmax)
            cifmax=c;
        if(n<minim &&c==cifmax)
            v[ct++]=n;
        ct++;
    }
    for(int i=0;i<ct;i++)
    {
        cmax(v[i],c);
        if(v[i]<minim && c==cifmax)
            minim=v[i];
    }
    cout<<cifmax<<" "<<minim;
    return 0;
}
