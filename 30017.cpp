#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    int a, b;
    cin >> a >> b;
    int size = min(a, b);

    if (size + 1 <= a) {
        cout << size * 2 + 1;
    }
    else {
        cout << (size - 1) * 2 + 1;
    }
}