#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> masks(n);

    for (int i = 0; i < n; ++i) {
        int num_wrkr;
        cin >> num_wrkr;
        int mask = 0;
        for (int j = 0; j < num_wrkr; ++j) {
            int day;
            cin >> day;
            mask |= (1 << day);
        }
        masks[i] = mask;
    }

    int max_days = 0;
    int person1 = -1;
    int person2 = -1;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int intersection = masks[i] & masks[j];
            int common_days = __builtin_popcount(intersection);
            if (common_days > max_days) {
                max_days = common_days;
                person1 = i;
                person2 = j;
            }
        }
    }

    cout << person1 << " " << person2 << "\n"; // Output the result

    return 0;
}

// int main(){
//     cout<<(1<<0);
//     cout<<(1<<1);
//     cout<<(1<<2);
// }