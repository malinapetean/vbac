#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[40]. vocale[5]="aeiou";
    cin>>s;
    for (int i=0;i<strlen(s);i++)
        if (strchr(v, s[i]) != 0)
        {
          char aux[40];
          strcpy(aux,s+i);
          strcpy(s+i+1,aux);
          s[i+1]=s[i+1]-32;
        }
    cout << s << endl;
    return 0;
}
