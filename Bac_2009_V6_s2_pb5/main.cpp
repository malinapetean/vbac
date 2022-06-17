#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[256];
	cin.get(s,255);
	s[0] = s[0] + 'A' - 'a';
	for (int i = 1; i < strlen(s); i++){
		if (s[i] != ' ' && s[i - 1] == ' ')
			s[i] = s[i] + 'A' - 'a';

	}
	cout<<s;
    return 0;
}
