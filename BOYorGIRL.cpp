#include <iostream>
#include <set>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    string username;
    cin >> username;

    // Use a set to store distinct characters
    set<char> distinct_chars(username.begin(), username.end());

    // Check the size of the set (number of distinct characters)
    if (distinct_chars.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}

