#include <iostream>
using namespace std;

void solve() {
    long long n, m;
    cin >> n >> m;
    
    // For 1x1 case
    if (n == 1 && m == 1) {
        cout << "2\n";  // mex({0}) + mex({0}) = 1 + 1 = 2
        return;
    }
    
    // For cases where either dimension is 1
    if (n == 1 || m == 1) {
        long long length = max(n, m);
        if (length == 2) cout << "3\n";  // Special case for length 2
        else cout << "4\n";  // For length >= 3
        return;
    }
    
    // For NxM table where N,M >= 2
    // We can always arrange numbers to get:
    // - 2 for most rows (by arranging numbers like [0,1])
    // - 2 for most columns (by arranging numbers like [0,1])
    // - Some rows and columns can get mex=1 (by using same number twice)
    long long result;
    if (n * m <= 4) {
        // Special cases for very small tables
        if (n == 2 && m == 2) result = 3;  // Optimal for 2x2
        else result = 4;
    } else {
        // For larger tables, we can always achieve mex=2 for each row and column
        result = n + m;  // Each row and column can get mex=1
    }
    
    cout << result << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}