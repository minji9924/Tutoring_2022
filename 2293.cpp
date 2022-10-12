#include <iostream>
using namespace std;

int n, k;
int dp[10010], coin[110];

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> coin[i];
    }

    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = coin[i]; j <= k; j++) {
            dp[j] = dp[j] + dp[j-coin[i]];
        }
    }
    cout << dp[k];
}