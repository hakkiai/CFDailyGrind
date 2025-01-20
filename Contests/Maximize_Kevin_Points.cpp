#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countDivisions(int x) {
    int count = 0;
    while (x % 2 == 0) {
        x /= 2;
        count++;
    }
    return count;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end(), [](int x, int y) {
        return countDivisions(x) > countDivisions(y);
    });
    
    int s = 0, points = 0;
    for (int i = 0; i < n; i++) {
        s += a[i];
        if (s % 2 == 0) {
            points++;
            while (s % 2 == 0) {
                s /= 2;
            }
        }
    }
    cout << points << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
