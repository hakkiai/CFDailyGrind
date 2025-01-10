#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <unordered_map>
using namespace std;

string decodeString(const string& b) {
    set<char> uniqueChars(b.begin(), b.end());
    string r(uniqueChars.begin(), uniqueChars.end()); // Auxiliary string `r`
    
    // Create a mapping of symmetric replacements for decoding
    unordered_map<char, char> decodingMap;
    int size = r.size();
    for (int i = 0; i < size; ++i) {
        decodingMap[r[i]] = r[size - i - 1];
    }

    // Decode string `b` to get `s`
    string s;
    for (char ch : b) {
        s += decodingMap[ch];
    }

    return s;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string b;
        cin >> b;

        string s = decodeString(b);
        cout << s << endl;
    }

    return 0;
}
