#include <bits/stdc++.h>
using namespace std;

void solve() {

	int n;
	cin >> n;

	int max_pow = 0, min_pf = 1e9;
	for (int pf = 2; pf * pf <= n; pf++) {
		if (n % pf == 0) {
			int pow = 0;
			while (n % pf == 0) {
				n /= pf;
				pow++;
			}
			if (pow > max_pow) max_pow = pow, min_pf = pf;
		}
	}
	if (max_pow == 0) min_pf = n;

	cout << min_pf << '\n';
}

int main() {
	int t;
	cin >> t;
	while (t--) solve();
}