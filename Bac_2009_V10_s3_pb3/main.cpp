#include <iostream>

using namespace std;

void sub(int n,int &a,int &b)
{
    a=0;
    b=0;
    for(int i=n-1;i>1;i--)
    {
        int ok=1;
        for(int j=2;j<i/2;j++)
            if(i%j==0)
            {
                ok=0;
                break;
            }
        if(ok==1)
        {
            if(a==0)
                a=i;
            if(b==0)
                b=i;
            else
                return;
        }
    }

}

int main()
{
    int n,a,b;
    cin>>n;
    sub(n,a,b);
    cout<<a<<" "<<b;

    return 0;
}
