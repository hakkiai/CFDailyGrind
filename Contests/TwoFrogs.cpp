#include <iostream>
#include <vector>
using namespace std;

// State: -1 = loss, 0 = unvisited, 1 = win
vector<vector<vector<int>>> dp;
int n;

bool isValid(int pos) {
    return pos >= 1 && pos <= n;
}

// Returns true if current player can win from this position
int solve(int alice_pos, int bob_pos, bool alice_turn) {
    // If already calculated
    if (dp[alice_pos][bob_pos][alice_turn] != 0) {
        return dp[alice_pos][bob_pos][alice_turn];
    }
    
    // Current player's position
    int curr_pos = alice_turn ? alice_pos : bob_pos;
    
    // Try moving left and right
    bool can_win = false;
    for (int move : {-1, 1}) {
        int next_pos = curr_pos + move;
        
        // Check if move is valid:
        // 1. Within bounds
        // 2. Not occupied by other frog
        if (!isValid(next_pos)) continue;
        if (alice_turn && next_pos == bob_pos) continue;
        if (!alice_turn && next_pos == alice_pos) continue;
        
        // Make move and check result
        int result;
        if (alice_turn) {
            result = solve(next_pos, bob_pos, false);
        } else {
            result = solve(alice_pos, next_pos, true);
        }
        
        // If opponent loses after this move, current player wins
        if (result == -1) {
            can_win = true;
            break;
        }
    }
    
    // If no winning moves found, current player loses
    dp[alice_pos][bob_pos][alice_turn] = can_win ? 1 : -1;
    return dp[alice_pos][bob_pos][alice_turn];
}

void solve_test_case() {
    int a, b;
    cin >> n >> a >> b;
    
    // Reset dp array for new test case
    dp.assign(n + 1, vector<vector<int>>(n + 1, vector<int>(2, 0)));
    
    // Alice starts first
    int result = solve(a, b, true);
    cout << (result == 1 ? "YES" : "NO") << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve_test_case();
    }
    
    return 0;
}