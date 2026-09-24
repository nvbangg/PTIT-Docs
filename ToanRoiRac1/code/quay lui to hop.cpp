#include <bits/stdc++.h>
using namespace std;
int x[100], n, k;
void out(){
    for (int i = 1; i <= k; i++) cout << x[i]; cout << " ";
}
void Try(int i){
    for (int j = x[i - 1] + 1; j <= n - k + i; j++){
        x[i] = j;
        if (i == k) out();
        else Try(i + 1);
    }
}
int main(){
    cin >> n >> k;
    x[0] = 0;
    Try(1);
    return 0;
}