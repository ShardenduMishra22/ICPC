#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int min_moves = (n + 1) / 2; // Minimum moves required to cover n steps
    int result = -1;

    for (int k = min_moves; k <= n; ++k) {
        if (k % m == 0) {
            result = k;
            break;
        }
    }

    cout << result << endl;

    return 0;
}
