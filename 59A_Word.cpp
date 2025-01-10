#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;  // Read input word

    int upper_count = 0, lower_count = 0;

    // Count uppercase and lowercase letters
    for (char c : s) {
        if (isupper(c)) {
            upper_count++;
        } else if (islower(c)) {
            lower_count++;
        }
    }

    // If uppercase letters are more, convert to uppercase; otherwise, to lowercase
    if (upper_count > lower_count) {
        for (char &c : s) {
            c = toupper(c);  // Convert each character to uppercase
        }
    } else {
        for (char &c : s) {
            c = tolower(c);  // Convert each character to lowercase
        }
    }

    cout << s << endl;  // Print the modified string

    return 0;
}
