#include <queue>
#include <vector>
using namespace std;

class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<bool>> visited(n, vector<bool>(n, false));
        priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, greater<tuple<int,int,int>>> pq;

        pq.push({grid[0][0], 0, 0});
        visited[0][0] = true;

        int dirs[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};

        while(!pq.empty()) {
            auto [elev, x, y] = pq.top(); pq.pop();
            if(x == n-1 && y == n-1) return elev;

            for(auto &d : dirs) {
                int nx = x + d[0], ny = y + d[1];
                if(nx>=0 && nx<n && ny>=0 && ny<n && !visited[nx][ny]) {
                    visited[nx][ny] = true;
                    pq.push({max(elev, grid[nx][ny]), nx, ny});
                }
            }
        }
        return -1; // unreachable
    }
};