#include <iostream>
#include <queue>
using namespace std;
int main()
{
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	int ans = n / 5 + n / 25 + n / 125;
	cout << ans;
}