#include <iostream>
#include <fstream>

using namespace std;
ifstream fin ("bac.txt");
int main()
{
    int f[10000],n,a,b,c,ct=0;
    for(int i=0;i<10000;i++)
        f[i]=0;
    while(fin>>n)
    {
        f[n]++;
    }
    for(int i=0;i<10000;i++)
    {
        if(f[i]!=0 && ct!=3)
        {
            if(ct==0)
                a=i;
            if(ct==1)
                b=i;
            if(ct==2)
                c=i;
            ct++;
        }
    }
    cout<<c<<" "<<b<<" "<<a;
    return 0;
}
