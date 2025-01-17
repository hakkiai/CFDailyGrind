#include <iostream>
#include <vector>
using namespace std;

int calculatePerimeter(vector<vector<bool>>& grid) {
    int perimeter = 0;
    int n = grid.size(), m = grid[0].size();
    int dx[] = {0, 0, 1, -1};
    int dy[] = {1, -1, 0, 0};
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(grid[i][j]) {
                int sides = 4;
                for(int k = 0; k < 4; k++) {
                    int ni = i + dx[k];
                    int nj = j + dy[k];
                    if(ni >= 0 && ni < n && nj >= 0 && nj < m && grid[ni][nj]) {
                        sides--;
                    }
                }
                perimeter += sides;
            }
        }
    }
    return perimeter;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        
        // Create grid large enough for all moves
        vector<vector<bool>> grid(200, vector<bool>(200, false));
        
        // Mark initial square
        int curX = 0, curY = 0;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < m; j++) {
                grid[i][j] = true;
            }
        }
        
        // Process moves
        for(int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            curX += x;
            curY += y;
            
            // Mark new square position
            for(int j = 0; j < m; j++) {
                for(int k = 0; k < m; k++) {
                    grid[curY + j][curX + k] = true;
                }
            }
        }
        
        cout << calculatePerimeter(grid) << endl;
    }
    return 0;
}