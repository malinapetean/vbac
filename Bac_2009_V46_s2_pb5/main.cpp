#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[256];
    cin.get(s,256);
    for(int i=0;i<strlen(s);i++)
    {
        if(strchr("aeiou",s[i]))
        {
            s[i]=s[i]+1;
        }

    }
    cout<<s;
    return 0;
}
