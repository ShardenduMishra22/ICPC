#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    for (int x = 1; x <= n - 1; x++) {
        if (n%(x+1) == 0){
            count += 1;
        }
    }
    cout << count << "\n";
    return 0;
}
