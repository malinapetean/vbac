#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("date.in");
int main()
{
    int n,nrel=0,v[100];
    fin>>n;
    for(int i=0;i<n;i++)
        fin>>v[i];
    for (int k = 0; k < n; k++) {
       for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
                if(v[i] + v[j] == v[k]) {
                    nrel++;
                }

    }
    cout<<nrel;
    return 0;
}
