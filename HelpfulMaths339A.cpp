#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> numbers;

    // Extract numbers from the input string
    for (char c : s) {
        if (c != '+') {
            numbers.push_back(c - '0'); // Convert char to int
        }
    }

    // Sort the numbers in non-decreasing order
    sort(numbers.begin(), numbers.end());

    // Construct the output string
    for (size_t i = 0; i < numbers.size(); i++) {
        cout << numbers[i];
        if (i != numbers.size() - 1) { // Add '+' between numbers
            cout << "+";
        }
    }

    cout << endl;

    return 0;
}
