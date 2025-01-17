#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<vector<int>> adj(n, vector<int>(n));
        vector<int> degree(n, 0);
        vector<int> perm(n);
        
        // Read adjacency matrix and calculate degrees
        for(int i = 0; i < n; i++) {
            string s;
            cin >> s;
            for(int j = 0; j < n; j++) {
                adj[i][j] = s[j] - '0';
                if(adj[i][j] == 1) {
                    degree[i]++;
                }
            }
        }
        
        // Map degrees to permutation values
        // Higher degree means smaller value in permutation
        vector<bool> used(n + 1, false);
        for(int val = 1; val <= n; val++) {
            int maxDeg = -1;
            int maxIdx = -1;
            
            // Find unused vertex with maximum degree
            for(int i = 0; i < n; i++) {
                if(!used[i] && degree[i] > maxDeg) {
                    maxDeg = degree[i];
                    maxIdx = i;
                }
            }
            
            perm[maxIdx] = val;
            used[maxIdx] = true;
        }
        
        // Output permutation
        for(int i = 0; i < n; i++) {
            cout << perm[i] << " ";
        }
        cout << endl;
    }
    return 0;
}