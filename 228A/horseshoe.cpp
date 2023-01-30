#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    ll arr[4];
    int cnt = 0;
    for(int i = 0; i< 4; i++){
        cin >> arr[i];
    }
    sort(arr, arr + 4); // sort for scenarios like  9 8 2 9
    for(int i = 1; i < 4; i++){
        if(arr[i] == arr[i - 1]){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}

