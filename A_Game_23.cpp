#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m;
    cin >> m;

    if (m % n != 0) {
        cout << -1;
        return 0;
    }
    if (m == n) {
        cout << 0;
        return 0;
    }

    int cnt = 0;
    m = m / n;

    while (m != 1) {
        if (m % 2 == 0) {
            m = m / 2;
            cnt += 1;
        } else if (m % 3 == 0) {
            m = m / 3;
            cnt += 1;
        } else {
            cout << -1;
            return 0;
        }
    }
    cout << cnt;
}
