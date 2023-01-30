#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    
    int a,b; cin >> a >> b;
    int cnt = 0;
    while(!(a > b)){
        a *= 3;
        b *= 2;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}