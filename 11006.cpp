#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	while (n--) {
		int a, b;
		cin >> a >> b;
		cout << 2 * b - a << " " << b - 2 * b + a << "\n";
	}
}