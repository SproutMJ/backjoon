#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	vector<int> v(n);
	for (auto& i : v)cin >> i;

	sort(v.begin(), v.end());
	unsigned long long ans = 0;
	for (int i = 1; i <= n; i++) {
		ans += abs(i - v[i-1]);
	}

	cout << ans;
}