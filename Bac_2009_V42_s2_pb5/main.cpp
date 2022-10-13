#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[40],ok=0;
    cin.getline(s,40);
    for(int i=0;i<strlen(s);i++)
    {
        if(strchr("aeiou",s[i]))
        {
            ok=1;
            cout<<s[i]<<" ";
        }
    }
    if(ok==0)
        cout<<"fara vocale";
    return 0;
}
