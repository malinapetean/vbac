#include <iostream>

using namespace std;
int pr(int a)
{
    if(a==0 || a==1)
        return 0;
    else
        for(int i=2;i<a;i++)
            if(a%i==0)
                return 0;
    return 1;

}
int main()
{
    int n;
    cin>>n;
    while(n>=10)
    {
        if(pr(n/10))
            cout<<n/10<<" ";
        n/=10;
    }
    return 0;
}
