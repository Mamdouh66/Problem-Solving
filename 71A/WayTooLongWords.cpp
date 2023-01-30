#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    int t; cin >> t;
    while(t--){   
    string s; cin >> s;
    int number = s.length()-2;
    char fl = s[0];
    char ls = s[s.length()-1];
    if(s.length() <= 10){
        cout << s << endl;
    } else{
        cout << fl << number << ls << endl;
    }
    }
    return 0;
}
