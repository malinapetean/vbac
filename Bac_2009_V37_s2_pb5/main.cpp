#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[256];
    cin.getline(s,256);
    s[0]=toupper(s[0]);
    s[strlen(s)-1]=toupper(s[strlen(s)-1]);
    for(int i=1;i<strlen(s)-2;i++)
    {
        if(s[i]!=' '&& (s[i+1]==' ' || s[i-1]==' '))
           s[i]=toupper(s[i]);
    }
    cout<<s;
    return 0;
}
