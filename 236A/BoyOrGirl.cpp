#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    string s; cin >> s;
    
    sort(s.begin(), s.end());
    int cnt = 0;
    for(int i =1; i <= s.length(); i++){
        if(s[i] != s[i-1]){
            cnt++;
        }
    }
    cout << ((cnt%2==0)? "CHAT WITH HER!": "IGNORE HIM!") << endl;
    return 0;
}

