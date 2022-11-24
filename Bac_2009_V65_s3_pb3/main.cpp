#include <iostream>

using namespace std;

int sfx(int x)
{
    int a=x/100%10,b=x/10%10,c=x%10;
    if(a>b && b>c)
        return 1;
    return 0;
}

int main()
{
    int n,aux;
    cin>>n;
    aux=n/1000;
    if(sfx(n)==1 && sfx(aux)==1 && n/100%10<aux%10)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
