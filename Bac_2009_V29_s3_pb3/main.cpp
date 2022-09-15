#include <iostream>

using namespace std;
int multipli(int a,int b,int c)
{
    int ct=0;
    for(int i=1;i<b;i++)
    {
        if(c*i>=a && c*i<=b)
            ct++;

    }
    return ct;
}
int main()
{
    cout << multipli(10,27,5);
    return 0;
}
