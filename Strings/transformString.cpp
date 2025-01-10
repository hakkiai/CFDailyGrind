#include<bits/stdc++.h>
using namespace std;

string reverseString(string s) {
    string res = s;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'p') res[i] = 'q';
        else if(s[i] == 'q') res[i] = 'p';
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        string a;
        cin >> a;
        cout << reverseString(a) << endl;
    }
    
    return 0;
}