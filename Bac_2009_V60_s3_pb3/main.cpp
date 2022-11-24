#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("bac.txt");


int main()
{
    int v[100],st=0,dr=100,nr,n;
    for(int i=0;i<100;i++)
    {
        fin>>nr;
        v[i]=nr;
    }
    fin>>nr;
    n=nr;
    cout<<n<<" ";
    int ok=0;
    while(st<dr && ok==0)
    {
        int m=(st+dr)/2;
        if(n<m)
        {
            dr=m+1;
        }
        if(n>m)
        {
            st=m+1;
        }
        if(n==m )
        {
            ok=1;
        }
    }
    if(ok==1)
    {
        cout<<"DA";
    }
    else
    {
        cout<<"NU";
    }
    return 0;
}
