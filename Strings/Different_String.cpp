#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        if (s[0] == s[s.size() - 1]) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            cout << s << "\n";
        }
    }
    
    return 0;
}
