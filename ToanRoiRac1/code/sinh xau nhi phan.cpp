#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int x[n + 1];
    for (int i = 1; i <= n; i++) x[i] = 0;
    while (1){
        for (int i = 1; i <= n; i++) cout << x[i]; cout << " ";
        int i = n;
        while (x[i] == 1 && i > 0) {x[i] = 0; i--;}
        if (i == 0) break;
        x[i] = 1;
    }
}