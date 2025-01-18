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

        vector<bool> used(n + 1, false);
        for(int val = 1; val <= n; val++) {
            int maxDeg = -1;
            int maxIdx = -1;
            

            for(int i = 0; i < n; i++) {
                if(!used[i] && degree[i] > maxDeg) {
                    maxDeg = degree[i];
                    maxIdx = i;
                }
            }
            
            perm[maxIdx] = val;
            used[maxIdx] = true;
        }

        for(int i = 0; i < n; i++) {
            cout << perm[i] << " ";
        }
        cout << endl;
    }
    return 0;
}