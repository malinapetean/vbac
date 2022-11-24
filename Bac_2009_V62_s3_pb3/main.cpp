#include <iostream>

using namespace std;
void fibo(int n,int v[100])
{
    int x, y, z, k = 0;
    x = 1;
    y = 1;
    v[1] = 1;
    v[2] = 1;
    k = 2;
    while (k < n)
    {
        z = x + y;
        if (z % 2 == 1)
            v[++k] = z;
        x = y;
        y = z;
    }
}
int main()
{
    int n,v[100];
    cin>>n;
    fibo(n,v);
    for(int i=1;i<=n;i++)
        cout<<v[i]<<" ";
    return 0;
}
