#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    int k,r; cin >> k >> r;
    int total = k, cnt1 =0;
    while(true){
        if(total % 10 == r || total % 10 == 0){
            cnt1++;
            break;
        }
        cnt1++;
        total+= k;
    }
    
    cout << cnt1 << endl;
    return 0;
}

