#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >>n;
    vector<int> v(n);
    for (auto &i : v)cin >>i;
    sort(v.begin(), v.end(), greater<int>());
    for (const auto &i : v)cout << i<< "\n";
}