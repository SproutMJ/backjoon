#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	while (n--) {
		int a, b, c;
		cin >> a >> b >> c;


		cout << a << " " << b << " " << c;
		if (a + b + c == 180)cout << " Seems OK\n";
		else cout << " Check\n";
	}
}