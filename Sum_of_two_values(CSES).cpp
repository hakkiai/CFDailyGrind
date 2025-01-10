#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, sum;
    cin >> n >> sum;
    
    vector<pair<int, int>> v(n); 
    
    
    for (int i = 0; i < n; ++i) {
        cin >> v[i].first;
        v[i].second = i + 1;  
    }
    
    
    sort(v.begin(), v.end());
    
    int i = 0;
    int j = n - 1;
    
    while (i < j) {
        int current_sum = v[i].first + v[j].first;
        
        if (current_sum == sum) {
            cout << v[i].second << " " << v[j].second << endl; 
            return 0;
        }
        else if (current_sum > sum) {
            j--;  
        }
        else {
            i++;  
        }
    }
    
    
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
