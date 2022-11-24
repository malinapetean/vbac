#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[51];
    int f[10];
    for(int i=0;i<10;i++)
        f[i]=0;
    cin.get(s,50);
    for(int i=0;i<strlen(s);i++)
    {
        if(strchr("1234567890",s[i]))
        {
            f[s[i]-'0']++;
        }

    }
    int maxim=0;
    for(int i=0;i<10;i++)
    {
        if(f[i]>maxim)
            maxim=f[i];
    }
    int ct=0;
    for(int i=0;i<10;i++)
    {
        if(f[i]==maxim && ct==0){
            cout<<i<<" ";
            ct++;
        }

    }
    if(maxim==0)
        cout<<"NU";
    return 0;
}
