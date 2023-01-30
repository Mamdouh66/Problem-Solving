#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    int s; cin >> s;
    int cnt = 1;
    int arr[s];
    for(int i = 0; i < s; i++){
        cin >> arr[i];
    }
    for(int i = 1; i < s; i++){
        if(arr[i] != arr[i-1]) cnt++;
    }
    cout << cnt;
    return 0;
}

