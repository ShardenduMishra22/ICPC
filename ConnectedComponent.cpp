#include <bits/stdc++.h>
using namespace std;

#pragma GCC target   ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx")
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("-ffloat-store")
#pragma GCC optimize ("Ofast")

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

c_int MOD=1e9 + 7;
c_int Mx_row=100;
c_int Mx_col=100;
int size_stack=0;
int InvrsnCnt=0;
int size_arr=0;
int size_ll=0;
int top=-1;

c_int N = 1e5+10; 
vint g[N];
bool vis[N];

void dfs(int vertex){
    vis[vertex] = true;
    for(auto child : g[vertex]){
        cout<<"Parent "<<vertex<<" Child "<<child;nl;
        if(vis[child]) continue;
        dfs(child);
    }
}

int main(){
    int NumberOfEdges,NumberOfNodes;
    cin>>NumberOfNodes>>NumberOfEdges;
    for(int i=0;i<NumberOfEdges;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int cnt = 0;
    for(int i=1;i<NumberOfNodes;i++){
        if(vis[i]){
            continue;
        }
        dfs(i);
        cnt += 1;
    }
    cout<<"Number of connected Component are : "<<cnt;
}