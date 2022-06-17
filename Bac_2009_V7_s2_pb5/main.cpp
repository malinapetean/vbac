#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[255];
    cin.get(s, 255);
    char v[] = " aeiou";
    int ok = 0, ct;
    ct = strlen(s) - 1;
    while (ok==0)
    {
        if (strchr(v, s[ct]) == 0)
        {
            strcpy(s + ct, s + ct + 1);
            ok = 1;
        }
        ct--;
    }
    cout << s;
    return 0;
}
