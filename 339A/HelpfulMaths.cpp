#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    string s; cin >> s;
    for(int i = 0; i < s.length(); i+=2){
        for(int j = 2; j < s.length(); j+=2){
            if (s[j] <= s[j-2]){
                swap(s[j], s[j-2]);
            }
        }
    }
    cout << s<< endl;
    return 0;
}
