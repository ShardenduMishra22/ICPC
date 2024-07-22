#include <bits/stdc++.h>
using namespace std;

static auto _ = [] () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

#define frw(i, len) for(ll i = 0   ; i < len ; i++)
#define frb(i, len) for(ll i = len ; i >= 0  ; i--)

#define YES cout<<"Yes \n";
#define NOO cout<<"No  \n";
#define nl cout<<"\n";

#define MAX_SIZE 10000
#define nptr nullptr

typedef stringstream strgm;
typedef long long int ll;
typedef const int c_int;
typedef unsigned unsg;
typedef double dbl;

typedef vector<vector<string>> vvstr;
typedef vector<vector<bool>> vvbl;
typedef vector<vector<int>> vvint;
typedef vector<vector<ll>> vvll;

typedef vector<string> vstr;
typedef vector<int> vint;
typedef vector<bool> vbl;
typedef vector<ll> vll;

typedef stack<string> sstr;
typedef stack<bool> sbl;
typedef stack<int> sint;
typedef stack<ll> sll;

typedef queue<string> qstr;
typedef queue<bool> qbl;
typedef queue<int> qint;
typedef queue<ll> qll;

c_int MOD = 1e9 + 7;
c_int Mx_row = 100;
c_int Mx_col = 100;
int size_stack = 0;
int InvrsnCnt = 0;
int size_arr = 0;
int size_ll = 0;
int top = -1;

// using recursion
ll fast_expo(ll a, ll b){
    if(b == 0) return 1;
    ll res = fast_expo(a, b / 2);
    if(b & 1){
        return (a * (res * res % MOD) % MOD) % MOD;
    }
    return (res * res % MOD) % MOD;
}

// using iteration
ll itra_expo(ll a, ll b){
    ll ans = 1;
    while(b){
        if(b & 1){
            ans = (ans * a % MOD) % MOD;
        }
        a = (a * a % MOD) % MOD;
        b >>= 1;
    }
    return ans;
}

int main(){
    ll num1, num2;
    num1 = 223423;
    num2 = 1234234;
    cout << fast_expo(num1, num2); nl;
    cout << itra_expo(num1, num2); nl;
    return 0;
}
