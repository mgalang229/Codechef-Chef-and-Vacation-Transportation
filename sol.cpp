#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int x, y, z;
		cin >> x >> y >> z;
		// simply compare the sum of x and y to z
		string ans = "EQUAL";
		if ((x + y) < z) {
			ans = "PLANEBUS";
		} else if ((x + y) > z) {
			ans = "TRAIN";
		}
		cout << ans << '\n';
	}
  return 0;
}