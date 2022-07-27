#include <iostream>

using namespace std;
void aranjare(double a[100],int n)
{
    int sch=1;
    while(sch)
    {
        sch=0;
        for(int i=0; i<n-1; i++)
            if(a[i]>a[i+1])
            {
                int aux=a[i];
                a[i]=a[i+1];
                a[i+1]=aux;
                sch=1;
            }
    }
}
int main()
{
    double a[100];
    for(int i=0;i<5;i++)
        cin>>a[i];
    aranjare(a,5);
    for(int i=0;i<5;i++)
        cout<<a[i]<<" ";
    return 0;
}
