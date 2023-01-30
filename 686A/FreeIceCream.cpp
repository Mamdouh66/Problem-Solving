#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    ll n, x, sum = 0, cnt = 0; cin >> n >> x;
    sum = x;
    char mark = ' ';
    while(n--){
        cin >> mark;
        if(mark == '+'){
            cin >> x;
            sum += x;
        }else{
            cin >> x;
            if(x > sum){
                cnt++;
                continue;
            } else{
                sum -= x;
            }
        }
    }
    cout << sum << " " << cnt << endl;
    return 0;
}
