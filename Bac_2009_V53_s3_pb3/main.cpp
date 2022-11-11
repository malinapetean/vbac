#include <iostream>

using namespace std;
int cmmdc(int a,int b)
{
    while(a!=b)
    {
        if(a>=b)
            a-=b;
        else
            b-=a;

    }
    return a;
}

int main()
{
    cout<<cmmdc(14,21);
    return 0;
}
