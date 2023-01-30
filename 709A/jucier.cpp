#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    int n,b,d; cin >> n >> b >> d;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int cnt = 0, sum = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] <= b){
            sum += arr[i];
        } 
        if(sum > d){
            cnt++;
            sum = 0;
        }
    }
    cout << cnt;
    return 0;
}
