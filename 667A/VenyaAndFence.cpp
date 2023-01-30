#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    int s, h, ans = 0; cin >> s >> h;
    int arr[s];
    for(int i = 0; i<s; i++){
        cin >> arr[i];
        if(arr[i] > h){
            ans += 2;
        } else {
            ans += 1;
        }
    }
    cout << ans;
    return 0;
}