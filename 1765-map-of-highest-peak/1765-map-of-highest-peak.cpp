class Solution {
public:
     vector<vector<int>> directions{{0,1},{0,-1},{-1,0}, {1,0}};
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater){
        int m = isWater.size();
        int n = isWater[0].size();

        vector<vector<int>> ans(m, vector<int>(n, -1));
        queue<pair<int, int>> que;
        // height of water cells must be 0 only
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                if (isWater[i][j] == 1){// this cell is water
                    ans[i][j] = 0; //this is a source for hitting bfs
                    que.push({i, j});
                }
            }
        }
        while (!que.empty()){
            auto front = que.front();
            que.pop();
        
            int x = front.first;
            int y = front.second;
            for(auto &dir : directions){
                int nx = x + dir[0];
                int ny = y + dir[1];

                if (nx >= 0 && nx < m && ny >= 0 && ny < n &&
                    ans[nx][ny] == -1) {

                    ans[nx][ny] = ans[x][y] + 1;
                    que.push({nx, ny});
                }
            }
        }
        return ans;
    }
};