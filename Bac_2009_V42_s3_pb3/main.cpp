#include <iostream>


using namespace std;


int P(int a[100],int n,int k)
{
    int sch=0,s=0;
    while(sch==0)
    {
        sch=1;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]<a[i+1])
            {
                int aux=a[i];
                a[i]=a[i+1];
                a[i+1]=aux;
                sch=0;
            }
        }
    }
    for(int i=0;i<k;i++)
        s+=a[i];
    return s;
}

int main()
{
    int a[100],n,k;
    cin>>n;
    cin>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<P(a,n,k);
    return 0;
}
