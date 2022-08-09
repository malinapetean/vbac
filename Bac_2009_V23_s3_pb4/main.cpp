#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("bac.txt");

void interval(int line,int n,int m[1000][2])
{
    int a=m[line][0];
    int b=m[line][1];
    int ok=0;
    for(int i=line+1;i<n;i++)
    {
        if(a<m[i][1]&& b>m[i][0])
            ok=1;

    }
    if(ok==0)
        cout<<a<<" "<<b<<"\n";
}

int main()
{
    int n,a,b,m[1000][2];
    fin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            fin>>a;
            m[i][j]=a;
        }

    }
    for(int i=0;i<n-1;i++)
    {
        interval(i,n,m);
    }


    return 0;
}
