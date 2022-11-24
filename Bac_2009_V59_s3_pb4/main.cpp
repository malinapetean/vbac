#include <iostream>

using namespace std;
void divizor(int a,int &d)
{
    for(int i=a;i>1;i--)
    {
        if(a%i==0)
            d=i;
    }
}
int main()
{
    int x,d;
    cin>>x;
    divizor(x,d);
    if(d==x)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
