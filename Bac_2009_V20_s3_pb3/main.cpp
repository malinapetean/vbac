#include <iostream>

using namespace std;

void nule(int a[100],int n)
{
    int aux;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==0 && a[i+1]!=0)
        {
            aux=a[i];
            a[i]=a[i+1];
            a[i+1]=aux;
            if(i>1)
                i=i-2;
        }
    }
}
int main()
{
    int n, a[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    nule(a,n);
    for (int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
