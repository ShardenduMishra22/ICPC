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
typedef deque<long long> dllnt; 
typedef vector<int> vint;
typedef long long int ll;
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

int main(){
    int n;cin>>n;
    int *arr = new int[n];
    int mx = INT_MIN;
    int mn = INT_MAX;
    int mx_indx = -1;
    int mn_indx = -1;
    int time = 0;
    fr(i,n){
        cin>>arr[i];
        if(arr[i] > mx){
            mx = arr[i];
            mx_indx = i;
        }
    }
    for(int i=mx_indx;i>0;i--){
        swap(arr[i],arr[i-1]);
        time++;
    }
    fr(i,n){
        if(arr[i] <= mn){
            mn = arr[i];
            mn_indx = i;
        }
    }
    for(int i = mn_indx;i < n-1;i++){
        swap(arr[i],arr[i+1]);
        time++;
    }
    cout<<time;
    delete []arr;   
}