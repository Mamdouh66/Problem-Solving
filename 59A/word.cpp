#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    int cntu = 0, cntl = 0;
    string s; cin >> s;
    for(int i = 0 ; i < s.length(); i++){
        if(s[i] >= 97) cntl++;
        else cntu++;
    }
    if(cntl >= cntu)
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    else 
    transform(s.begin(),s.end(),s.begin(), ::toupper);
    cout << s;
    return 0;
}

