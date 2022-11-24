#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[100];
    cin.get(s,100);
    for(int i=0;i<strlen(s);i++)
    {
        if(!((s[i]>='a' && s[i]<='z') ||(s[i]>='A' && s[i]<='Z')))
        {
            strcpy(s+i,s+i+1);
            i--;
        }
    }
    cout<<s;
    return 0;
}
