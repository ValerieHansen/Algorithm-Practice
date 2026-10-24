#include <vector>
#include <iostream>
#define INF 1000000
using namespace std;
using ll = long long;




int main(){
vector<ll> dp(1000000, INF);
int n, x; // Where n is number of coins, and x is the desired sum
vector<int> coins = {1,5,7};
n = 3, x = 11;

dp[0] = 0;

for (int i = 1; i <= x; i++){
    for (int j = 0; j < n; j++){
        if (coins[j] <= i)
            dp[i] = min(dp[i], dp[i-coins[j]]+1);
        
    }
}

    if (dp[x] == INF){
        cout << -1;
    } else {
        cout << dp[x];
    }

    
    return 0;
}