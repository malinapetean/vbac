#include <iostream>

using namespace std;
long cmmdc(long a, long b)
{
    while (a != b)
        if (a > b)
            a = a - b;
        else
            b = b - a;
    return a;
}
long calcul(int n, long a[10000])
{
    long c = cmmdc(a[1], a[2]);
    for (int i = 3; i <= n; i++)
        c = cmmdc(c, a[i]);
    return c;
}

int main()
{
    int n;
    long a[10000];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cout<<calcul(n,a);
    return 0;
}
