#include <iostream>
#include <string.h>
#include<fstream>
using namespace std;

struct nod {
    char info[30];
    nod *next;
};
nod *prim;

void adaug(nod *&prim, char x[30])
{
    nod *nou = new nod;
    strcpy(nou->info, x);
    nou->next = prim;
    prim = nou;
}
void afis(nod *prim)
{
    nod *p = prim;
    while (p) {
        cout<< p->info << " ";
        p = p->next;
    }
    cout << endl;
}
int main()
{
    int n;
    char s[30];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s;
        if (s[0] == s[strlen(s) - 1])
            adaug(prim, s);
    }
    afis(prim);
    return 0;
}
