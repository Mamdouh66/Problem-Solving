#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    int cntA, cntD;
    int n; cin >> n;
    char s[n]; 
    for(int i = 0; i < n; i++){
        cin >> s[i];
        if(s[i] == 'A'){
            cntA++;
        } else{
            cntD++;
        }
    }
    if(cntA > cntD){
        cout << "Anton" << endl;
    } else if(cntA < cntD){
        cout << "Danik"<< endl;
    } else{
        cout <<"Friendship" << endl;
    }
    return 0;
}