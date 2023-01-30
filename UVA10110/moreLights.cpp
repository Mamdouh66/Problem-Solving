#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    ll n;
    while(cin >>n){
        if(n == 0) break;
        bool flag = false;
        if(((int)sqrt(n)*sqrt(n)) == n) flag = true;
        cout << (flag? "yes": "no") << endl;
    }
    return 0;
}
