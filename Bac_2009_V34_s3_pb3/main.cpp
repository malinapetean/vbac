#include <iostream>

using namespace std;
int maxim(int x[101],int n)
{
    int maxim=-9999;
    for(int i=0;i<n;i++)
        if(x[i]>maxim)
            maxim=x[i];
    return maxim;
}
int main()
{

    return 0;
}
