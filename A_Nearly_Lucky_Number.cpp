#include<bits/stdc++.h>
using namespace std;

#define frb(i, len) for(int i = len-1; i >= 0; i--)
#define fr(i, len) for(int i = 0; i < len; i++)
#define tas cout<<"Tell a string : ";
#define nl cout<<"\n";
#define nptr nullptr
#define pr protected
#define pv private
#define pb public
#define MAX_SIZE 1000
typedef vector<vector<string>> vvstr;
typedef vector<vector<int>> vvint;
typedef vector<string> vstr;
typedef stack<int> sint;
typedef vector<long long> vll;
typedef queue<int> qint;
typedef vector<int> vint;
typedef long long int ll;
typedef deque<ll> dllnt;
typedef const int c_int;
typedef double dbl;
int InversionCount = 0;
int size_stack = 0;
int size_arr = 0;
int size_ll = 0;
int top = -1;
c_int MOD = 1e9 + 7;
c_int Mx_row = 100;
c_int Mx_col = 100;

int main() {
    long long n;
    cin>>n;

    long long c=0;
    while(n!=0) {
        long long d = n%10;
        if(d==4||d==7) c++;
        n /= 10;
    }

    if(c==7 || c==4) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}