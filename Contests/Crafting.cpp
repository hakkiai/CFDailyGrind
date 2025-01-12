#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];

        long long spare = 0, needed = 0;

        for (int i = 0; i < n; ++i) {
            if (a[i] > b[i]) {
                spare += (a[i] - b[i]);
            } else {
                needed += (b[i] - a[i]);
            }
        }

        if (spare >= needed) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
