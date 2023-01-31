#include<bits/stdc++.h> 
#include <stack>
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;



int main()
{
    mamdouh
    stack<ll>s;
    ll n; cin >> n;
    while(n--){
        int x; cin >> x;
        if (x==1){
            int y; cin >> y;
            s.push(y);
        } else if(x==2){
            if(!s.empty()){
                s.pop();
            }
            continue;
        } else{
            if(s.empty()){
                cout << "Empty!" << endl;
            }else{
                cout << s.top() << endl;
            }
        }
    }
  return 0;
}