#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[255],c[20];
    cin.get(s,255);
    cin.get();
    cin.get(c,20);
    if (strstr(s, c) == 0)
        cout << "NU APARE";
    else
    {
        while (strstr(s, c) != 0)
        {
            char *p = strstr(s, c);
            for (int i = 0; i < strlen(c); i++)
                p[i] = '*';
        }
    }

    cout<<s;
    return 0;
}
