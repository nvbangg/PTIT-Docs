#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int x[n + 1];
    for (int i = 1; i <= n; i++) x[i] = i;
    while (1){
        for (int i = 1; i <= n; i++) cout << x[i]; cout << " ";
        int i = n - 1, k = n;
        while (x[i] > x[i + 1] && i > 0) i--;
        if (i == 0) break;
        while (x[k] < x[i]) k--;
        swap(x[i], x[k]);
        reverse(x + i + 1, x + n + 1);
    }
    return 0;
}
