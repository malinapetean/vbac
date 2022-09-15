#include <iostream>

using namespace std;

int suma(int v[100],int n,int i,int j)
{
    int s=0;
    for(int a=1;a<=i-1;a++)
    {
        s+=v[a];
    }
    for(int a=j+1;a<=n;a++)
    {
        s+=v[a];
    }
    return s;
}

int main()
{
    int n,v[100];
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    for(int i=1;i<=n;i++)
        cout<<v[i]<<" ";
    cout<<endl;

    cout<<suma(v,8,4,6);
    return 0;
}
