#include <iostream>
#include <set>
#include <vector>
using namespace std;

int maxFibonacciness(int a1, int a2, int a4, int a5) {
    set<int> possible_a3 = {a1 + a2, a4 - a2, a5 - a4};
    int max_count = 0;
    
    for (int a3 : possible_a3) {
        int count = 0;
        if (a3 == a1 + a2) count++;
        if (a4 == a2 + a3) count++;
        if (a5 == a3 + a4) count++;
        
        max_count = max(max_count, count);
    }
    
    return max_count;
}

int main() {
    int t;
    cin >> t;
    vector<int> results;
    
    while (t--) {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;
        results.push_back(maxFibonacciness(a1, a2, a4, a5));
    }
    
    for (int res : results) {
        cout << res << endl;
    }
    
    return 0;
}
