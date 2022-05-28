#include <iostream>
#include <queue>
using namespace std;
int arr[100];
int dp[100][100001];
int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		dp[i][arr[i]] = 1;
	}

	for (int i = 1; i < n; i++)
		for (int j = 1; j <= 100000; j++) {
			dp[i][j] += dp[i - 1][j];
			dp[i][j] %= 10000003;

			int g = gcd(arr[i], j);
			dp[i][g] += dp[i - 1][j];
			dp[i][g] %= 10000003;
		}

	cout << dp[n - 1][1];
}