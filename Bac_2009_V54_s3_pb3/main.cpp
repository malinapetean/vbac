#include <iostream>

using namespace std;
void inv(int a,int &b)
{
    while(a!=0)
    {
        int c=a%10;
        b=b*10+c;
        a/=10;
    }

}
int main()
{
    int a,b=0;
    cin>>a;
    inv(a,b);
    cout<<b;
    return 0;
}
