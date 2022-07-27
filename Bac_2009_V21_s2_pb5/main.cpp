#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[251];
    cin.get(s,251);
    for(int i=0;i<strlen(s)-1;i++)
        if(s[i]==s[i+1]&& s[i]!='*')
            cout<<s[i]<<s[i+1]<<endl;
    return 0;
}
