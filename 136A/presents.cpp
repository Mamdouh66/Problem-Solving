#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int arr1[n] = {};
    for(int i = 0; i < n; i++){
        arr1[arr[i]-1] = i+1;        
    }
    for(int i = 0; i < n; i++)
        cout << arr1[i] << " ";
    return 0;
}
