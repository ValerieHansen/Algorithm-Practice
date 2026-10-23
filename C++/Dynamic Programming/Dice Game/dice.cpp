#include <iostream>
using namespace std;
const int maxN = 1e6;



int dp[maxN], inp;

int main() {

    cin >> inp;
    
    dp[0] = 1;
    for(int i = 1; i <= inp; i++){
        for(int j = 1; j <= 6 && i - j >= 0; j++){
            dp[i] = (dp[i] + dp[i-j]);
        }
    }

    cout << dp[inp];
    return 0;
}