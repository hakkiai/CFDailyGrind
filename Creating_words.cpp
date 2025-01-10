#include <iostream>
#include <string>

using namespace std;

void swapFirstCharacters(string& a, string& b) {
    if (!a.empty() && !b.empty()) {
        swap(a[0], b[0]);
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string a, b;
        cin >> a >> b;

        swapFirstCharacters(a, b);

        cout << a << " " << b << endl;
    }

    return 0;
}