#include <iostream>

using namespace std;

int sub(long n)
{
    if(n<=5){
        return n;
    }
    else{
        return 2*sub(n-1);
    }
}

int main()
{
    long s,i=0;
    cin>>s;
    while(sub(i)<s)
    {
        i++;
    }
    cout<<sub(i-1);


    return 0;
}
