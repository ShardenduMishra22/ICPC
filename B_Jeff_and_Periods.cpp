#include<bits/stdc++.h>
using namespace std;

#define frb(i, len) for(int i = len-1; i >= 0; i--)
#define fr(i, len) for(int i = 0; i < len; i++)
#define tas cout<<"Tell a string : ";
#define nl cout<<"\n";
#define N 1000
typedef vector<vector<string>> vvstr;
typedef vector<vector<int>> vvint;
typedef vector<string> vstr;
typedef vector<int> vint;
typedef long long int ll;
typedef const int c_int;
typedef double dbl;
int InversionCount = 0;
c_int MOD = 1e9 + 7;
c_int Mx_row = 100;
c_int Mx_col = 100;


int main(){
    int n; cin>>n;
    int *arr = new int[n];
    int *arr2 = new int[n];
    fr(i,n) cin>>arr[i];
    int x;
    int cnt = 0;
    fr(i,n){
        arr2[i] = arr[i];
    }
    fr(i,n){
        for(int j = i;j<n;j++){
            if(arr2[i] == arr2[j]){
                cnt += 1;
            }
        }
    }
    cout<<cnt<<"\n";
    fr(i,n){
        for(int j = i;j<n;j++){
            if(arr[i] == arr[j]){
                cout<<arr[i]<<" "<<j;
                break;
            }
        }
        nl;
    }
    delete []arr;
    delete []arr2;
}