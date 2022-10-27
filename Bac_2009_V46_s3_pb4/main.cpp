#include <iostream>

using namespace std;


void cifre(int nr,int &sc,int &nc)
{
    sc=0;
    nc=0;
    while(nr)
    {
        int c=nr%10;
        sc+=c;
        nc++;
        nr/=10;
    }
}
int main()
{
    int n,sc,nc,ok=0;
    cin>>n;
    cifre(n,sc,nc);
    while(n)
    {
        int c=n%10;
        if(c==(int)(sc-c)/(nc-1))
            ok=1;
        n/=10;
    }
    if(ok==0)
        cout<<"NU";
    else
        cout<<"DA";
    return 0;
}
