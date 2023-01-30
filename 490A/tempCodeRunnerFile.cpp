#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    int n,x; cin >> n;
    int m1, m2, m3;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    for(int i = 0; i <n;i++){
        cin >> x;
        if(x == 1){
             m1++;
             v1.push_back(i+1);
        }
        if(x == 2){
             m2++;
             v2.push_back(i+1);
        }
        if(x == 3){
         m3++;
            v3.push_back(i+1);
        }
    }
    int teams = 0;
    
    while(true){ // to know the teams
        if(m1 != 0 && m2 != 0 && m3 != 0){
            teams++;
            m1--;
            m2--;
            m3--;
        }else{
            break;
        }
    }
    if(teams == 0){
        cout << 0 << endl;
        return 0;
    }
    cout << teams << endl;
    for(int i = 0; i < teams; i++){
        cout << v1.back() << " " << v2.back() << " " << v3.back() << endl;
        v1.pop_back();
        v2.pop_back();
        v3.pop_back();
    }
    return 0;
}
