#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    int n,t,k,d; cin >> n >> t >> k >> d;
    int fo = ceil((double)n/k) * t; //time for first oven
    int rem = n - (d/t) * k; // remaining cakes after the oven built
    int so = d + ceil((double)rem/(2*k)) *t; // time with building second oven
    cout <<((fo <= so)? "NO": "YES") << endl;
    return 0;
}
