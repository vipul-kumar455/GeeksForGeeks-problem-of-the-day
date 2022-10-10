vector<int> numOfIslands(int n, int m, vector<vector<int>> &operators) {

        // code here

        vector<int> res;

        int cur = 0, itr = 1;

        vector<set<pair<int, int>>> ils;

        vector<vector<int>> visited(n, vector<int>(m, 0));

        for (vector<int> x : operators) {

            int i = x[0], j = x[1];

            if (visited[i][j] == 0) {

                pair<int, int> temp = make_pair(i, j);

                set<int> ti;

                for(int s = 0; s < ils.size(); s++) {

                    if (ils[s].size() > 0 ) {

                        if (ils[s].find(make_pair(i, j - 1)) != ils[s].end() || ils[s].find(make_pair(i - 1, j)) != ils[s].end()) {

                            ti.insert(s);

                        }

                        else if (ils[s].find(make_pair(i, j + 1)) != ils[s].end() || ils[s].find(make_pair(i + 1, j)) != ils[s].end()) {

                            ti.insert(s);

                        }

                    }

                }

                if (ti.size() == 0) {

                    cur++;

                    set<pair<int, int>> side;

                    side.insert(temp);

                    ils.push_back(side);

                }

                else if (ti.size() > 1) {

                    int index = *ti.begin();

                    ils[index].insert(temp);

                    for (int s : ti) {

                        if (s != index) {

                            cur--;

                            for (pair<int, int> p : ils[s]) {

                                ils[index].insert(p);

                            }

                            ils[s].clear();

                        }

                    }

                }

                else {

                    ils[*ti.begin()].insert(temp);

                }

            }

            visited[i][j] = 1;

            res.push_back(cur);

        }

        return res;

    }
