#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t; // input the number of test cases

    while (t--) {
        int n;
        cin >> n; // input the number of friends

        vector<int> p(n);
        for (int i = 0; i < n; ++i) {
            cin >> p[i]; // input the best friend of each friend
        }

        // Count how many friends have their best friends as the first i friends
        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            if (p[i] <= i + 1) { // If friend i's best friend is among the first i friends
                ++cnt;
            }
        }

        // Ensure at least 2 friends attend the party
        if (cnt < 2) {
            cout << 2 << "\n"; // Need to send invitations to at least 2 friends
        } else {
            cout << cnt << "\n"; // At least 2 friends can attend based on the current invitations
        }
    }

    return 0;
}

