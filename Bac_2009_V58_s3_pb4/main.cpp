#include <iostream>

using namespace std;
void divizor(int a,int &d)
{
    for(int i=1;i<a;i++)
        if(a%i==0)
            d=i;

}

int main()
{
    int x,d;
    cin>>x;
    divizor(x,d);
    if(d==1)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
