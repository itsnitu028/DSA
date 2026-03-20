class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        //Leetcode problem 3567
         int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>>ans(m - k + 1, vector<int>( n - k + 1));
        for(int i = 0; i <= m-k; i++){
            for(int j = 0; j <= n-k; j++){
                vector<int> v;

                for(int x = i; x < i+k; x++){
                    for(int y = j; y < j+k; y++){
                        v.push_back(grid[x][y]);
                    }
                }
                if(v.size() < 2){
                    ans[i][j] = 0;
                    continue;
                }
                 int mn = INT_MAX;
                sort(v.begin(),v.end());
                for(int p = 1; p < v.size(); p++){
                    if(v[p] != v[p-1]) {   
                        mn = min(mn, v[p] - v[p-1]);
                    }
                }
                  if(mn == INT_MAX) mn = 0;
                ans[i][j] = mn;
            }
        }
        return ans;
    }
};