#include <iostream>

using namespace std;

void cif(int nr,int &s)
{
    s=0;
    while(nr)
    {
        s+=nr%10;
        nr/=10;
    }
}

int main()
{

    int nr,st,v[26],s[26],poz;
    cin>>nr;
    for(int i=0;i<nr;i++)
    {
        cin>>v[i];
        cif(v[i],st);
        s[i]=st;
    }

    int maxim=0;

    for(int i=0;i<nr;i++)
    {
        if(s[i]>maxim)
        {
            maxim=s[i];
            poz=i;
        }
    }
    for(int i=0;i<nr;i++)
    {
        if(s[i]==maxim)
            cout<<v[i]<< " ";
    }


    return 0;
}
