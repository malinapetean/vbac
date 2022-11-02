#include <iostream>

using namespace std;

int main()
{
    int n,v[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int sch=0;
    while(sch==0)
    {
        sch=1;
        for(int i=0;i<n-1;i++)
        {
            if(v[i]>v[i+1])
            {
                int aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                sch=0;
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    cout<<endl;
    int ok=1;
    for(int i=1;i<n;i++)
    {
        if(v[i]-v[i-1]!=i)
            ok=0;
    }
    if(ok==0)
        cout<<"Nu";
    else
        cout<<"Da";
    return 0;
}
