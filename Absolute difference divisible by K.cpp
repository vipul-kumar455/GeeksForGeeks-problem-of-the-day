  long long countPairs(int n, int a[], int k) {
  long long cnt = 0;
  unordered_map<int, int> modCounts;
  for (int i = 0; i < n; i++) {
    int mod = a[i] % k;
    cnt += modCounts[mod];
    modCounts[mod]++;
  }
  return cnt;
}
