#include <bits/stdc++.h>
using namespace std;

int isPrime(long long n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int t; cin >> t;
    while (t--) {
        long long n, m; cin >> n >> m;
        int cnt = 0;
        for (int i = n; i <= sqrt(m); i++) {
            if (isPrime(i)) cnt++;
        }
        cout << cnt << endl; 
    }
}