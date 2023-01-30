#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    int n,k; cin >> n >> k;
    int it = 0;
    char a = 'a';
    for(int i = 0; i < n; i++){
        if(it == k){
            it = 0;
            a = 'a';
        }
        cout << a;
        it++;
        a = 'a' + it;
    }
    return 0;
}
