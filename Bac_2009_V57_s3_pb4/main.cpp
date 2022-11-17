#include <iostream>

using namespace std;
int multiplu(int a,int k)
{
    int nr=1;
    for(int i=2;i<a;i++)
    {
        if(i*k>=a)
        {
            nr=i*k;
            i=a;
        }
    }
    return nr;
}
int main()
{
    int x,y,z,ct=0;
    cin>>x>>y>>z;
    for(int i=1;i<y;i++)
    {
        if(multiplu(x*i,z)<=y)
            ct++;
    }
    if(ct>=1)
    {
        cout<<"DA";
    }
    else
    {
        cout<<"NU";
    }
    return 0;
}
