#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[255];
    cin.get(s,255);
    char f[255];
    for(int i=0;i<=255;i++)
    {
        f[i]=0;
    }
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>='a' && s[i]<='z')
            f[s[i]]++;
    }
    for(int i=0;i<=255;i++)
    {
        if(f[i]!=0)
        {
            cout<<(char)(i)<<" ";
        }
    }
    return 0;
}
