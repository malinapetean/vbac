#include <iostream>

using namespace std;
int verif(int n)
{

    while(n!=0)
    {
        int x=n/100%10,y=n/10%10,z=n%10;
        if(x%2==1 && y%2==1 && z%2==1)
            return 1;
        n/=10;
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    n=n/1000;
    if(verif(n)==1)
        cout<<"Da";
    else
        cout<<"Nu";
    return 0;
}
