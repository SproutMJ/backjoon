#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	while (n--) {
		int k;
		cin >> k;

		for (int i = 0; i < k; i++)cout << '=';
		cout << "\n";
	}
}