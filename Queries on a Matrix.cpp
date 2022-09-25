vector<vector<int>> solveQueries(int n, vector<vector<int>> queries) {
        // Code here
        vector<vector<int>>v(n, vector<int>(n));
        for(auto &q : queries){
            int x1 = q[0], y1 = q[1], x2 = q[2], y2 = q[3];
            v[x1][y1]++;
            if(x2 + 1 < n)
                v[x2 + 1][y1]--;
            if(y2 + 1 < n)
                v[x1][y2 + 1]--;
                
            if(x2 + 1 < n && y2 + 1 < n)
                v[x2 + 1][y2 + 1]++;
        }
        
        
        for(int i = 0; i < n; i++){
            for(int j = 1; j < n; j++){
                v[i][j] += v[i][j - 1];
            }
        }
        
        
        for(int j = 0; j < n; j++){
            for(int i = 1; i < n; i++){
                v[i][j] += v[i-1][j];
            }
        }
        return v;
    }
