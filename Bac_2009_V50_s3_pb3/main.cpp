#include <iostream>

using namespace std;
int divxy(int x,int y)
{
    if(x%y==0 || y%x==0)
        return 1;
    else
        return 0;
}

int main()
{
    int a,b,n;
    cin>>a>>b>>n;
    if(a>b)
    {
        int aux=a;
        a=b;
        b=aux;
    }
    for(int i=a;i<=b;i++)
    {
        if(divxy(n,i)==1 && i<=n )
            cout<<i<<" ";
    }
    return 0;
}
