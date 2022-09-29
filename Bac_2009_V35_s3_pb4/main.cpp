#include <iostream>

using namespace std;
int sum(int x)
{
    int s=0;
    for(int i=2;i<x;i++)
        if(x%i==0)
            s+=i;
    return s;
}
void sortare(int n,int a[101])
{
    int sch=0;
    while(sch==0)
    {
        sch=1;
        for(int i=0;i<n;i++)
            if(a[i]>a[i+1])
            {
                int aux=a[i];
                a[i]=a[i+1];
                a[i+1]=aux;
                sch=0;
            }
    }
}
int main()
{
    int n,a[101];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        a[i]=sum(a[i]);
    sortare(n,a);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
