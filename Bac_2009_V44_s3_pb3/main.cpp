#include <iostream>
#include <cmath>

using namespace std;
void P(int a,int b)
{
    int ok=1;
    for(int i=a;i<=b;i++)
    {
        double aux=sqrt(i);
        cout<<aux<<" ";
        if(aux==0 || aux==1)
            ok=0;
        else
            for(int j=2;j<=aux;j++)
                if(aux%j==0)
                    ok=0;
        if(ok==1)
            cout<<i<<" ";
        else
            ok=1;
    }

}
int main()
{
    int a, b;
    cin>>a>>b;
    cout<<sqrt(a)<<endl;
    P(a,b);
    return 0;
}
