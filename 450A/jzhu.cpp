#include<bits/stdc++.h> 
#include <stack>
#define endl "\n" 
#define mamdouh cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0); 
using namespace std; 
typedef long long ll;

int main()
{
    mamdouh
    
    int n , m;
    cin >> n >> m;

    double arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    double max = 0;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        
        if (ceil(arr[i]/m) >= max)
        {
            max = ceil(arr[i]/m);
            index = i;
        }
    }
    cout << index +1 << endl;

  return 0;
}