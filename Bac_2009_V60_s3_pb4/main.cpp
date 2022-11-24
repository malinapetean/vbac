#include <iostream>

using namespace std;
void radical(int a,int &x)
{
    for(int i=1;i<=a/2;i++)
    {
        if(i*i<=a)
            x=i;
    }
}
int main()
{
    int n,x;
    cin>>n;
    radical(n,x);
    if(x*x==n)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
