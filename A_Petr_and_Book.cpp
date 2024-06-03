#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[7];
    
    int sum = 0;
    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    while (n > sum) {
        n -= sum;
    }

    for (int i = 0; i < 7; i++) {
        n -= arr[i];
        if (n <= 0) {
            cout << (i + 1);
            break;
        }
    }

    return 0;
}
