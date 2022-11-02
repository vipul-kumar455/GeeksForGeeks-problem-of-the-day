int largestArea(int n,int m,int k,vector<vector<int>> &enemy)
        {
            vector<int>row(n,0);
            vector<int>col(m,0);
            
            for(int i = 0 ; i < enemy.size() ; i++){
                row[enemy[i][0]-1] = -1;
                col[enemy[i][1]-1] = -1;
            }
            
            
            int maxRow = 0;
            int maxCol = 0;
            int cntRow = 0;
            int cntCol = 0;
            
            for(int i = 0 ; i < n ; i++){
                if(row[i]!=-1){
                    cntRow++;
                }
                else{
                    cntRow = 0;
                }
                maxRow = max(maxRow,cntRow);
            }
            
            for(int i = 0 ; i < m ; i++){
                if(col[i]!=-1){
                    cntCol++;
                }
                else{
                    cntCol = 0;
                }
                maxCol = max(maxCol,cntCol);
            }
            
            return maxRow*maxCol;
        
        }
