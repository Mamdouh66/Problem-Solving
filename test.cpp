#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    ll n,m; cin >> n;
    vector <ll> arr[n];
    ll MAX = 0;
    for(int i = 0; i < n; i++){  // no. of companies
        cin >> m;
        for(int j = 0; j < m; j++){ // m-ith company size
            ll x; cin >> x;
            arr[i].push_back(x);
            MAX = max(MAX, x);
        }
    }
    for(int i = 0; i < n; i++){
        sort(arr[i].begin(), arr[i].end(), greater<int>());
    }
    ll sum = 0;
    for(int i = 0; i < n; i++){
        if(arr[i].front() == MAX){
            continue;
        } else{
            sum += (MAX-arr[i].front()) * arr[i].size();
        }
    }
    cout << sum;
    return 0;
}
