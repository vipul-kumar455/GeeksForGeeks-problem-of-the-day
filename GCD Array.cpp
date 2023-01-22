 vector<int> v;
        int sum = 0, ans = 0;
        
        for(int i = 0; i < n; i++) {
            sum += arr[i];
        }
        for(int i = 1; i * i <= sum; i++) {
            if(sum%i == 0) {
                v.push_back(i);
                if(i != sum/i) v.push_back(sum/i);
            }
        }
        for(int i = v.size() - 1; i >= 0; i--) {
            
            int cur = 0, mx = sum/v[i], cnt = 0;
            for(int j = 0; j < n; j++) {
                cur += arr[j];
                if(cur%v[i] == 0) {
                    cur = 0;
                    cnt++;
                }
            }
            if(cur != 0 && cur%v[i] == 0) cnt++;
            
            if(cnt >= k) ans = max(ans, v[i]);
        }
        return ans;
