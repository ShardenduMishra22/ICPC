#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a;
    cin >> n >> m >> a;
    
    int l = (n + a - 1) / a; 
    int r = (m + a - 1) / a; 

    cout << (1ll) * l * r; 

    return 0;
}

