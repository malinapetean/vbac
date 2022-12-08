#include <iostream>

using namespace std;
int calcul(int n)
{
    int cp=0,cimp=0;
    while(n!=0)
    {
        if(n%10%2==0)
        {
            cp++;
        }
        if(n%10%2==1)
        {
            cimp++;
        }
        n/=10;
    }
    return cp-cimp;
}
int main()
{
    int n,m;
    cin>>n;
    while(calcul(n)!=0)
    {
        n++;
    }
    m=n;
    cout<<m;

    return 0;
}
