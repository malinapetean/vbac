#include <iostream>

using namespace std;
void suma(int x[100],int n,int m)
{
    int sch=0;
    while(sch==0)
    {
        sch=1;
        for(int i=0;i<n;i++)
        {
            if(x[i]>x[i+1])
            {
                int aux=x[i];
                x[i]=x[i+1];
                x[i+1]=aux;
                sch=0;
            }

        }
    }
    for(int i=0;i<n;i++)
        cout<<x[i]<< " ";
    int ct=0,s=0;
    for(int i=0;i<n;i++)
    {
        s+=x[i];
        ct++;
        if(ct==m)
            cout<<s;
    }

}
int main()
{
    int n,m,x[100];
    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++)
        cin>>x[i];
    suma(x,6,4);

    return 0;
}
