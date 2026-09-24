#include <bits/stdc++.h>
using namespace std;
int n, x[11], check[11] = {0};
void out(){
    for (int i = 1; i <= n; i++) cout << x[i]; cout << " ";
}
void Try(int i){
    for (int j = 1; j <= n; j++){
        if (check[j] == 0){
            x[i] = j;
            check[j] = 1;
            if (i == n) out();
            else Try(i + 1);
            check[j] = 0;
        }
    }
}
int main(){
    cin >> n;
    Try(1);
    return 0;
}