#include <bits/stdc++.h> 
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main(){
    mamdouh
    int n; cin >> n;
    int cntA = 0, cntB = 0;
    int x = 0;
    int t = 0;
    for(int i = 0; i < n*3; i++){
        cin >> x;
        if( x == 1) cntA++;
        t++;
        if(t == 3){
            if(cntA >= 2) cntB++;
            cntA = 0;
            t = 0;
        }
    }
    cout << cntB << endl;
    return 0;
}

// other solution
/*
    int n, Petya, Vasya, Tonya, number(0);
    cin >> n;
    while (n--)
    {
        cin >> Petya >> Vasya >> Tonya;
        if (Petya + Vasya + Tonya >= 2)
        {
            number += 1;
        }
    }
    cout << number << endl;
    */