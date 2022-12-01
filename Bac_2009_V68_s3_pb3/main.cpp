#include <iostream>

using namespace std;

int calcul(long n,int k)
{
    int aux=n;
    int lg=0;
    while(aux!=0)
    {
        aux/=10;
        lg++;
    }
    if(lg<k)
        return -1;
    else
    {
        int ct=0;
        while(ct!=k)
        {
            aux=n%10;
            n/=10;
            ct++;
        }
    }
    return aux;
}
int main()
{
    long n,ct=1,ok=1;
    cin>>n;
    while(n)
    {
        if(calcul(n,1)<=ct)
        {
            ct++;
            n/=10;
        }
        else
        {
            ct++;
            n/=10;
            ok=0;
        }

    }
    if(ok==1)
        cout<<"Da";
    else
        cout<<"Nu";
    return 0;
}
