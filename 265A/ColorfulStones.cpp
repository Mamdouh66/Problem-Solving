#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    string s,c; cin >> s >> c;
    int it = 0;
    for(int i = 0; i < c.length(); i++){
        if(c[i] == s[it]){
            it++;
        }
    }
    cout << it + 1;
    return 0;
}
