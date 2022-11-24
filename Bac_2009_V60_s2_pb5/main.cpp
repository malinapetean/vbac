#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int f[256];
    char s[50];
    cin.get(s,50);
    for(int i=0;i<256;i++)
        f[i]=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>='a' &&s[i]<='z')
            f[s[i]]++;
    }
    int maxim=0,ct=0;
    for(int i=0;i<256;i++)
        if(f[i]>maxim)
            maxim=f[i];
    for(int i=0;i<256;i++)
    {
        if(f[i]==maxim && ct==0)
        {
            cout<<(char)(i);
            ct++;
        }
    }
    return 0;
}
