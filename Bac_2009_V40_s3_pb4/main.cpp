#include <iostream>

using namespace std;
int sdiv(int y)
{
    int s=0;
    for(int i=1;i<=y;i++)
    {
        if(y%i==0)
            s+=i;
    }
    return s;
}
int main()
{

    int n,ok=0;
    cin>>n;
    int aux=sdiv(n);
    cout<<aux<<endl;
    if(aux==0 || aux==1)
        ok=1;
    else{
        for(int i=2;i<aux;i++)
            if(aux%i==0)
                ok=1;

    }
    if(ok==1)
        cout<<"NU";
    else
        cout<<"DA";
    return 0;
}
