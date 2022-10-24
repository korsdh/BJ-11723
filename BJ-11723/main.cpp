#include <iostream>
#include <algorithm>
#include <bitset>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int M;
	cin >> M;
	long long int S = 0;
	while (M--) {
		string order;
		int n;
		cin >> order;
		if (order == "all") {
			S = (1 << 21) - 1;
		}
		else if (order == "empty") S = 0;
		else {
			if (order == "add") {
				cin >> n;
				S = S | (1 << n);
				//cout << bitset<8>(S) << endl;
			}
			else if (order == "remove") {
				cin >> n;
				S = S & ~(1 << n);
			}
			else if (order == "check") {
				cin >> n;
				if ((S & (1 << n)) > 0) cout << "1" << '\n';
				else cout << "0" << '\n';
			}
			else if (order == "toggle") {
				cin >> n;
				S = S ^ (1 << n);
			}
		}
	}
	return 0;
}